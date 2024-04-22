/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_best_match.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:03:32 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 12:07:19 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_best_match(t_stack *stack, int value)
{
	t_stack	*best_match;
	int		b_value;

	best_match = NULL;
	b_value = INT_MAX;
	while (stack)
	{
		if (stack->value > value)
		{
			if (stack->value < b_value)
			{
				b_value = stack->value;
				best_match = stack;
			}
		}
		stack = stack->next;
	}
	return (best_match);
}
