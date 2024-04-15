#include "../push_swap.h"

void ft_sort_3(t_stack **a)
{
	int max;
	t_stack *temp;

    if ((!a || !*a ) || ft_is_sorted(*a))
		return;
    temp = *a;
    max = temp->value;
    while (temp)
    {
		if (temp->value > max)
			max = temp->value;
		temp = temp->next;
    }
	if ((*a)->value == max)
		ra(a);
	if ((*a)->next->value == max)
		rra(a);
    if ((*a)->value > (*a)->next->value)
    	sa(a);
}