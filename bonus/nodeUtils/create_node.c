/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:14:09 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/21 21:15:28 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

t_stack	*create_node(t_stack *parent, int nbr)
{
	t_stack	*a;

	a = malloc(sizeof(t_stack));
	if (!a)
		return (NULL);
	a->prev = parent;
	if (parent)
		a->index = parent->index + 1;
	else
		a->index = 0;
	a->value = nbr;
	a->next = NULL;
	return (a);
}
