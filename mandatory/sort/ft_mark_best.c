/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mark_best.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:14:07 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/23 19:49:17 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_mark_best(t_stack *stack)
{
	int		best_cost;
	t_stack	*best_node;

	if (!stack)
		return ;
	best_cost = INT_MAX;
	best_node = NULL;
	while (stack)
	{
		if (stack->cost < best_cost)
		{
			best_cost = stack->cost;
			best_node = stack;
		}
		else
			stack->best_move = 0;
		stack = stack->next;
	}
	if(best_node)
		best_node->best_move = 1;
}
