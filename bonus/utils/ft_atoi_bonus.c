/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:14:30 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/23 17:32:05 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	extra_check(int *sign, char *c, int *i)
{
	if (ft_is_sign(c[*i]))
	{
		*sign = ft_get_sign(c[*i]);
		(*i)++;
	}
	if (c[*i] == '\0' || !ft_is_nbr(c[*i]))
		ft_exit("Error\n", 1);
}

int	ft_atoi(char *nbr)
{
	int	result;
	int	sign;
	int	temp;
	int	i;

	i = 0;
	result = 0;
	temp = 0;
	sign = 1;
	extra_check(&sign, nbr, &i);
	while (nbr[i] != '\0')
	{
		if (ft_is_nbr(nbr[i]))
		{
			temp = result;
			result = result * 10 + (nbr[i] - '0');
			if (((result < temp) && sign > 0)
				|| ((result < temp) && sign < 0 && result != INT_MIN))
				ft_exit("Error\n", 1);
		}
		else
			ft_exit("Error\n", 1);
		i++;
	}
	return (result * sign);
}
