#include "../push_swap.h"

int ft_stack_min_index(t_stack *stack)
{
    int min;

    min = stack->value;
    while (stack)
    {
        if (stack->value < min)
            min = stack->value;
        stack = stack->next;
    }
    return (min);
}