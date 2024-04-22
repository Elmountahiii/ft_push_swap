/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:55:12 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 14:55:57 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_words(char *str)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!is_space(str[i]))
		{
			while (str[i] && !is_space(str[i]))
				i++;
			words ++;
		}
		else
		{
			while (str[i] && is_space(str[i]))
				i++;
		}
	}
	return (words);
}

char	**ft_split(char *str)
{
	char	**split;
	int		i;
	int		index;
	int		len;

	len = count_words(str);
	if (len == 0)
		ft_exit("Error : split", 1);
	split = malloc(sizeof(char *) * (len + 1));
	i = 0;
	index = 0;
	if (!split)
		return (NULL);
	while (str[i])
	{
		if (str[i] && !is_space(str[i]))
		{
			split[index++] = ft_substr(str, i);
			while (str[i] && !is_space(str[i]))
				i ++;
		}
		else
			i++;
	}
	return (split[index] = NULL, split);
}
