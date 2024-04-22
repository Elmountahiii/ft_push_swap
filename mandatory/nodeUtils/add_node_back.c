/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:50:46 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 11:52:56 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
