#include "../push_swap.h"

void ft_rotate_move(t_stack **stack,t_stack *target,
                    void (*r)(t_stack **s),
                    void (*rr)(t_stack **s))
{
    while (*stack != target)
    {
        if (target->top)
            r(stack);
        else
            rr(stack);
    }
    
    ft_update_positions(*stack,NULL);
}