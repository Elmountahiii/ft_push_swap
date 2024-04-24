/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:02:05 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/24 11:50:25 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*second;
	t_stack	*first;

	if (*stack && (*stack)->next)
	{
		first = (*stack);
		second = (*stack)->next;
		first->next = second->next;
		second->next = first;
		(*stack) = second;
	}
}

void	sa(t_stack **a)
{
	swap(a);
	ft_print("sa\n", 1);
}

void	sb(t_stack **b)
{
	swap(b);
	ft_print("sb\n", 1);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_print("ss\n", 1);
}
