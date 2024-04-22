/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:58:17 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 17:02:38 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free_array(char **split, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(split[i]);
		i ++;
	}
	free(split);
}