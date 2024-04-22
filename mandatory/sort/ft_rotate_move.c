/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:43:32 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 13:45:18 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate_move(t_stack **stack, t_stack *target,
						void (*r)(t_stack **s),
						void (*rr)(t_stack **s))
{
	while (*stack != target)
	{
		if (target->top)
			r(stack);
		else
			rr(stack);
	}
	ft_update_positions(*stack, NULL);
}
