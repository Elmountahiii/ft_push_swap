/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setup_nodes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:54:55 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 11:55:32 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_setup_nodes(t_stack **a, t_stack **b)
{
	ft_update_stack_index(*a, *b);
	ft_update_positions(*a, *b);
	ft_get_targets(*a, *b);
	ft_calculate_cost(*a, *b);
	ft_mark_best(*b);
}
