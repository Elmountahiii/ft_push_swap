/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:43:05 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 14:45:23 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_init_stack(t_stack **a, int argc, char **argv)
{
	int		i;
	int		j;
	char	**split;

	i = 1;
	j = 0;
	if (argc >= 2)
	{
		while (i < argc)
		{
			j = 0;
			split = ft_split(argv[i]);
			while (split && split[j])
			{
				add_node_back(a, ft_atoi(split[j]));
				j++;
			}
			i ++;
		}
	}
}
