/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_position.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:50:16 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 13:52:01 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_update_positions(t_stack *a, t_stack *b)
{
	int	a_len;
	int	b_len;

	a_len = ft_stack_len(a) / 2;
	b_len = ft_stack_len(b) / 2;
	while (a)
	{
		if (a->index <= a_len)
			a->top = 1;
		else
			a->top = 0;
		a = a->next;
	}
	while (b)
	{
		if (b->index <= b_len)
			b->top = 1;
		else
			b->top = 0;
		b = b->next;
	}
}
