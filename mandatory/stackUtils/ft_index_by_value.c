#include "../push_swap.h"

int ft_index_by_value(t_stack *stack, int value)
{
    while (stack)
    {
        if (stack->value == value)
            return (stack->index);
        stack = stack->next;
    }
    return (-1);
}