/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_back_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:11:36 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/23 17:30:22 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	add_node_back(t_stack **stack, int nbr)
{
	t_stack	*node;

	if (*stack)
	{
		node = *stack;
		while (node->next)
		{
			node = node->next;
		}
		node->next = create_node(node, nbr);
	}
	else
	{
		*stack = create_node(NULL, nbr);
	}
}
