#include "../checker.h"

t_stack  *create_node(t_stack *parent ,int nbr)
{
    t_stack *a;

    a = malloc(sizeof(t_stack));
    if (!a)
        return NULL;
    a->prev = parent;
    if (parent)
        a->index = parent->index + 1;
    else
        a->index = 0;
    a->value = nbr;
    a->next = NULL;
    return (a);
}