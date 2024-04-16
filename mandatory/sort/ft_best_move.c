#include "../push_swap.h"

int ft_best_move(t_stack **a, t_stack **b)
{
    int m1;
    int m2;
    
    
    ft_update_stack_index(*a, *b);
   
    if (!ft_stack_has_bf(*a,*b))
        return (1);
    else if (!ft_has_bf(*a,(*b)->value))
    {
        rb(b);
        ft_best_move(a, b);
        return (0);
    }
     if(ft_check_rrr(*a,*b))
    {
        rrr(a,b);
        return (0);
    }
    m1 = ft_move_one_cost(*a, *b);
    m2 = ft_move_two_cost(*a, *b);
    if (m2 < m1)
         ft_bring_top(b,ft_b_bi(*a,*b),rb,rrb);  
    else
        ft_bring_top(a,ft_bf_index(*a,(*b)->value),ra,rra);
    return (0);
}