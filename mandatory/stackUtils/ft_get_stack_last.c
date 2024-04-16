#include "../push_swap.h"

int ft_get_stack_last(t_stack *stack)
{
    while (stack->next)
        stack = stack->next;
    return (stack->value);
}