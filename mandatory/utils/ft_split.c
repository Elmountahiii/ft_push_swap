/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:55:12 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/24 17:53:18 by yel-moun         ###   ########.fr       */
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
	if (words == 0)
		ft_exit("Error\n", 2);
	return (words);
}

void	free_arr(char **split, int c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		free(split[i++]);
	}
	free(split);
	ft_exit("Error\n", 2);
}

void	split_part1(char **str, char ***split)
{
	int		i;
	int		index;
	char	*tmp;

	index = 0;
	i = 0;
	while ((*str)[i])
	{
		if ((*str)[i] && !is_space((*str)[i]))
		{
			tmp = ft_substr((*str), i);
			if (tmp)
				(*split)[index++] = tmp;
			else
				free_arr(*split, index);
			while ((*str)[i] && !is_space((*str)[i]))
				i ++;
		}
		else
			i++;
	}
	(*split)[index] = NULL;
}

char	**ft_split(char *str)
{
	char	**split;

	split = malloc(sizeof(char *) * (count_words(str) + 1));
	if (!split)
		return (NULL);
	split_part1(&str, &split);
	return (split);
}
