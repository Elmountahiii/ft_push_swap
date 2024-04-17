#include "../push_swap.h"

t_stack *ft_get_best_move(t_stack *b)
{
    t_stack *best_node;
    if (!b)
        return (NULL);
    best_node = NULL;
    while (b)
    {
        if (b->best_move)
        {
            best_node = b;
            break;
        }
        b = b->next;
    }
    return (best_node);
}