#include "../push_swap.h"

void ft_update_positions(t_stack *a, t_stack *b)
{
    int a_len;
    int b_len;

    a_len = ft_stack_len(a) / 2;
    b_len = ft_stack_len(b) / 2;
    
    while (a)
    {
        if (a->index <= a_len)
            a->top = 1;
        else
            a->top = 0;
        a = a->next;
    }
    while (b)
    {
        if (b->index <= b_len)
            b->top = 1;
        else
            b->top = 0;
        b = b->next;
    }
}