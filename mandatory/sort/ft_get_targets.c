/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_targets.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:12:23 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 12:13:16 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_get_targets(t_stack *a, t_stack *b)
{
	while (b)
	{
		if (ft_best_match(a, b->value))
		{
			b->target = ft_best_match(a, b->value);
		}
		else
		{
			b->target = ft_stack_min(a);
		}
		b = b->next;
	}
}
