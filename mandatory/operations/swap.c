#include "../push_swap.h"

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
	ft_print("sa\n");
}

void sb(t_stack ** b)
{
    swap(b);
	ft_print("sb\n");
}

void ss(t_stack **a, t_stack **b)
{
    swap(a);
    swap(b);
	ft_print("ss\n");
}