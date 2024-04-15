#include "../push_swap.h"

int ft_stack_max(t_stack *stack)
{
    int max;

    max = stack->value;
    while (stack)
    {
        if (stack->value > max)
            max = stack->value;
        stack = stack->next;
    }
    return (max);
}