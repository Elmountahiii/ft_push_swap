#include "../push_swap.h"

int ft_has_bf(t_stack *stack, int value)
{
    while (stack)
    {
        if (stack->value > value)
            return (1);
        stack = stack->next;
    }
    return (0);
}