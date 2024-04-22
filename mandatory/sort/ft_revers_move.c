/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revers_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:22:14 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 13:43:21 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_revers_move(t_stack **a, t_stack **b,
					t_stack *bm,
					void (*f)(t_stack **a, t_stack **b))
{
	while (*a != bm->target && *b != bm)
		f(a, b);
	ft_update_positions(*a, *b);
}
