/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_sign.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:45:47 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/21 19:47:18 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_get_sign(char sign)
{
	if (sign == '+')
		return (1);
	if (sign == '-')
		return (-1);
	if (ft_is_nbr(sign))
		return (1);
	return (0);
}
