#include "../push_swap.h"

void ft_sort_stack(t_stack **a,t_stack **b)
{
    while (*b)
    {
        if(ft_best_move(a, b) == 1)
            break;
        pa(a, b);
    }
    ft_update_stack_index(*a, *b);
    ft_bring_top(a,ft_index_by_value(*a,ft_stack_min(*a)),ra,rra);
    ft_update_stack_index(*a, *b);

    while (*b)
    {
        ft_bring_top(b,ft_index_by_value(*b,ft_stack_min(*b)),rb,rrb);
        pa(a, b);
        ra(a);
        ft_update_stack_index(*a, *b);
    }
}