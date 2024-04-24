/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:48:37 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/24 13:10:27 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_split_stack(t_stack **a, t_stack **b, int len)
{
	int	i;
	int	average;

	i = 0;
	if (len == 3)
		return ;
	while (i < len)
	{
		average = ft_get_stack_average(*a);
		if ((*a)->value < average)
			pb(b, a);
		else
			ra(a);
		i++;
	}
	while (ft_stack_len(*a) > 3)
		pb(b, a);
}
