#include "../checker.h"

void rotate(t_stack **stack)
{
    t_stack *first;
    t_stack *last;
    first = NULL;
    last = NULL;
    if(*stack &&  (*stack)->next)
    {
        first = *stack;
        *stack = (*stack)->next;
        (*stack)->prev = NULL;
        first->next = NULL;
        first-> prev = NULL;
        last = *stack;
        while (last->next)
            last = last->next;
        last->next = first;
        first->prev = last;
    }
}

void ra(t_stack **a)
{
    rotate(a);
}
void rb(t_stack **b)
{
    rotate(b);
}
void rr(t_stack **a,t_stack **b)
{
    rotate(a);
    rotate(b);
}