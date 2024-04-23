/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:21:58 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/23 17:31:03 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	first = NULL;
	last = NULL;
	if (*stack && (*stack)->next)
	{
		first = *stack;
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
		first->next = NULL;
		first->prev = NULL;
		last = *stack;
		while (last->next)
			last = last->next;
		last->next = first;
		first->prev = last;
	}
}

void	ra(t_stack **a)
{
	rotate(a);
}

void	rb(t_stack **b)
{
	rotate(b);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
}
