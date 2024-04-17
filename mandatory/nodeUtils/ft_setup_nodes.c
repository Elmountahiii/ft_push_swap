#include "../push_swap.h"

void ft_setup_nodes(t_stack **a, t_stack **b)
{
    ft_update_stack_index(*a, *b);
    ft_update_positions(*a,*b);
    ft_get_targets(*a,*b);
    ft_calculate_cost(*a,*b);
    ft_mark_best(*b);
}