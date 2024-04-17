#include "../push_swap.h"

void ft_get_targets(t_stack *a, t_stack *b)
{
    while (b)
    {
        if (ft_best_match(a,b->value))
        {
            b->target = ft_best_match(a,b->value);
        }else
        {
            b->target = ft_stack_min(a);
        }
        b = b->next;
    } 
}