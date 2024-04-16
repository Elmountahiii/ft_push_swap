#include "../push_swap.h"

int ft_move_one_cost(t_stack *a, t_stack *b)
{
    int cost;
    int b_bf_index;

    b_bf_index = ft_bf_index(a,b->value);
    cost = ft_bring_top_cost(a,b_bf_index);
    return (cost);
}