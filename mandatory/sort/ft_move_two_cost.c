#include "../push_swap.h"

int ft_move_two_cost(t_stack *a,t_stack *b)
{
    int cost;
    int b_bf_index;

    b = b->next;
    cost = INT_MAX;
    while (b)
    {
        b_bf_index = ft_bf_index(a,b->value);
        if (b_bf_index == 0)
        {
            if (b_bf_index == 0 && ft_bring_top_cost(b,b->index) < cost)
            {
                cost = ft_bring_top_cost(b,b->index);
                break;
            }
        }

        b = b->next;
    }
    return (cost);
}