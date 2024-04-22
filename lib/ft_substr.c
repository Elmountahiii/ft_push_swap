/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:55:21 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/21 20:04:03 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*ft_substr(char *str, int start)
{
	int		len;
	int		end;
	char	*sub;
	int		i;

	i = 0;
	while (str[i + start])
	{
		if (is_space(str[i + start]))
			break ;
		i ++;
	}
	end = start + i;
	len = end - start;
	i = 0;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (str[i + start] && i < len)
	{
		sub[i] = str[i + start];
		i ++;
	}
	sub[i] = '\0';
	return (sub);
}
