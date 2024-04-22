/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:00:37 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 12:01:40 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	ft_print("ra\n");
}

void	rb(t_stack **b)
{
	rotate(b);
	ft_print("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_print("rr\n");
}
