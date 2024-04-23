/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:06:08 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/23 21:56:20 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
				free(split[j]);
				j++;
			}
			free(split);
			i ++;
		}
	}
}
