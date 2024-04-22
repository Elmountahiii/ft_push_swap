/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_stack_average.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:41:51 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 14:42:29 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_get_stack_average(t_stack *stack)
{
	int	len;
	int	sum;

	len = ft_stack_len(stack);
	sum = 0;
	while (stack)
	{
		sum += stack->value;
		stack = stack->next;
	}
	return (sum / len);
}
