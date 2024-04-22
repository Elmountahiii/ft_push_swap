/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_best.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:17:19 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 12:20:48 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_best(t_stack **a, t_stack **b)
{
	t_stack	*best_move;

	best_move = ft_get_best_move(*b);
	if (best_move->top && best_move->target->top)
		ft_revers_move(a, b, best_move, rr);
	else if (best_move->top == 0 && best_move->target->top == 0)
		ft_revers_move(a, b, best_move, rrr);
	ft_rotate_move(a, best_move->target, ra, rra);
	ft_rotate_move(b, best_move, rb, rrb);
	pa(a, b);
}
