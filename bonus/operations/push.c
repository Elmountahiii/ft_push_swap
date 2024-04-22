/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:16:20 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/21 21:18:33 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	push(t_stack **from, t_stack **to)
{
	t_stack	*to_move;

	to_move = NULL;
	if (*from)
	{
		to_move = *from;
		if ((*from)->next)
			(*from)->next->prev = NULL;
		*from = (*from)->next;
		if (*to)
			(*to)->prev = to_move;
		to_move->next = *to;
		to_move->prev = NULL;
		*to = to_move;
	}
}

void	pa(t_stack **a, t_stack **b)
{
	push(b, a);
}

void	pb(t_stack **b, t_stack **a)
{
	push(a, b);
}
