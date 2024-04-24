/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversRotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:59:08 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/24 11:49:55 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	ft_print("rra\n", 1);
}

void	rrb(t_stack **b)
{
	revers_rotate(b);
	ft_print("rrb\n", 1);
}

void	rrr(t_stack **a, t_stack **b)
{
	revers_rotate(a);
	revers_rotate(b);
	ft_print("rrr\n", 1);
}
