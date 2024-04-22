/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_best_move.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:09:33 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 12:12:12 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_get_best_move(t_stack *b)
{
	t_stack	*best_node;

	if (!b)
		return (NULL);
	best_node = NULL;
	while (b)
	{
		if (b->best_move)
		{
			best_node = b;
			break ;
		}
		b = b->next;
	}
	return (best_node);
}
