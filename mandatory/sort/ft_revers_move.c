#include "../push_swap.h"


void ft_revers_move(t_stack **a, t_stack **b,
                    t_stack *bm,
                    void (*f)(t_stack **a,t_stack **b))
{
   while (*a != bm->target && *b != bm)
       f(a,b);
    
    ft_update_positions(*a,*b);
}