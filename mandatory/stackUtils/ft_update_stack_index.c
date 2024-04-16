#include "../push_swap.h"

void ft_update_stack_index(t_stack *a, t_stack *b)
{
    int i;

    i = 0;
    while (a)
    {
        a->index = i;
        i++;
        a = a->next;
    }
    i = 0;
    while (b)
    {
        b->index = i;
        i++;
        b = b->next;
    }
}