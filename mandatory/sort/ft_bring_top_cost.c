#include "../push_swap.h"

int ft_bring_top_cost(t_stack *stack, int index)
{
    int len;
   
    int cost;
    
    len = ft_stack_len(stack);
    if (index > len / 2)
        cost = len - index;
    else
        cost = index;
    
    return (cost);
}