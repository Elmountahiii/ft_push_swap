#include "../push_swap.h"

void add_node_back(t_stack **stack, int nbr)
{
    t_stack *node;
    if(*stack)
    {
        node = *stack;
        while (node->next)
        {
            node = node->next;
        }
        node->next = create_node(node,nbr);
       
    }else
    {
        *stack = create_node(NULL,nbr);
    }
}