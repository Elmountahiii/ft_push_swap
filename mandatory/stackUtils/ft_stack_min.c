#include "../push_swap.h"

t_stack *ft_stack_min(t_stack *stack)
{
    t_stack *min;

    min = stack;
    while (stack)
    {
        if (stack->value < min->value)
            min = stack;
        stack = stack->next;
    }
    return (min);
}