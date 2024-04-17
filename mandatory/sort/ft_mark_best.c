#include "../push_swap.h"

void ft_mark_best(t_stack *stack)
{
    int best_cost;
    t_stack *best_node;
   
    if (!stack)
        return;
    best_cost = INT_MAX;
    while (stack)
    {
        if (stack->cost < best_cost)
        {
            best_cost = stack->cost;
            best_node = stack;
        }else
            stack->best_move = 0;
        stack = stack->next;
    }
    best_node->best_move = 1;
}