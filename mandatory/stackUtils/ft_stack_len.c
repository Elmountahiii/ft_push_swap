#include "../push_swap.h"

int ft_stack_len(t_stack *stack)
{
    int len;

    len = 0;
    while (stack)
    {
        len++;
        stack = stack->next;
    }
    return len;
}