#include "../push_swap.h"

void push(t_stack **from , t_stack **to)
{
    t_stack *toMove;
    toMove = NULL;
    if (*from)
    {
        toMove = *from;
        if ((*from)->next)
            (*from)->next->prev = NULL;
        *from = (*from)->next;
        if (*to)
            (*to)->prev = toMove;
        toMove->next = *to;
        toMove->prev = NULL;
        *to = toMove;
    }
}

void pa(t_stack **a, t_stack **b)
{
    push(b,a);
    ft_print("pa\n");
}

void pb(t_stack **b, t_stack **a)
{
    push(a,b);
    ft_print("pb\n");
}