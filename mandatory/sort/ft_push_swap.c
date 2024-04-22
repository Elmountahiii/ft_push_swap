/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:20:55 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 12:21:31 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_swap(t_stack **a, t_stack **b)
{
	if (ft_stack_len(*a) == 2)
	{
		if (!ft_is_sorted(*a))
			sa(a);
		return ;
	}
	ft_split_stack(a, b, ft_stack_len(*a));
	ft_sort_3(a);
	ft_sort(a, b);
}
