/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:47:11 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 13:48:22 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort(t_stack **a, t_stack **b)
{
	t_stack	*stack_min;

	while (*b)
	{
		ft_setup_nodes(a, b);
		ft_push_best(a, b);
	}
	ft_update_stack_index(*a, *b);
	ft_update_positions(*a, *b);
	stack_min = ft_stack_min(*a);
	ft_rotate_move(a, stack_min, ra, rra);
	ft_update_stack_index(*a, *b);
}
