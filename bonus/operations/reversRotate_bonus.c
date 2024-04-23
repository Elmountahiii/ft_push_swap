/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversRotate_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:18:43 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/23 17:31:00 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	revers_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*second_last;

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

void	rra(t_stack **a)
{
	revers_rotate(a);
}

void	rrb(t_stack **b)
{
	revers_rotate(b);
}

void	rrr(t_stack **a, t_stack **b)
{
	revers_rotate(a);
	revers_rotate(b);
}
