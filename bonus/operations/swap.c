#include "../checker.h"

void swap(t_stack **stack)
{
    t_stack	*second;
    t_stack	*first;
	
	if(*stack && (*stack)->next)
	{
		first = (*stack);
		second = (*stack)->next;
		first->next = second->next;
		second->next = first;
		(*stack) = second;
    }
}

void sa(t_stack **a)
{
    swap(a);
}

void sb(t_stack ** b)
{
    swap(b);
}

void ss(t_stack **a, t_stack **b)
{
    swap(a);
    swap(b);
}