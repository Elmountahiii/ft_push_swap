#include "../push_swap.h"

int ft_stack_has_bf(t_stack *a, t_stack *b)
{
    while (b)
    {
        if (ft_has_bf(a, b->value))
            return (1);
        b = b->next;
    }
    return (0);
}