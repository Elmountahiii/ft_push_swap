/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate_cost.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:07:27 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 12:09:23 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_calculate_cost(t_stack *a, t_stack *b)
{
	int	a_len;
	int	b_len;

	a_len = ft_stack_len(a);
	b_len = ft_stack_len(b);
	while (b)
	{
		b->cost = b->index;
		if (b->top == 0)
			b->cost = b_len - b->index;
		if (b->target->top == 1)
			b->cost += b->target->index;
		else
			b->cost += a_len - b->target->index;
		b = b->next;
	}
}
