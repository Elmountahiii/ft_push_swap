/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_stack_index.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:51:40 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 14:53:06 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_update_stack_index(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (a)
	{
		a->index = i;
		i++;
		a = a->next;
	}
	i = 0;
	while (b)
	{
		b->index = i;
		i++;
		b = b->next;
	}
}
