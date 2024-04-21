#include "../checker.h"

void reversRotate(t_stack **stack) 
{
    t_stack *last;
    t_stack *second_last;
    
    if (*stack && (*stack)->next)
    {
        last = *stack;
        while (last->next) 
        {
			second_last = last;
			last = last->next;
        }
		second_last->next = NULL;
		last->prev = NULL;
		last->next = *stack;
		(*stack)->prev = last;
		*stack = last;
	}
}

void rra(t_stack **a)
{
    reversRotate(a);
}
void rrb(t_stack **b)
{
    reversRotate(b);
}

void rrr(t_stack **a, t_stack **b)
{
    reversRotate(a);
    reversRotate(b);
}