#include "../push_swap.h"

int ft_value_by_index(t_stack *stack, int index)
{
    while (stack)
    {
        if (stack->index == index)
            return (stack->value);
        stack = stack->next;
    }
    return (-1);
}