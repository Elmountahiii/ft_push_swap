/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:10:32 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/24 18:04:40 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	ft_init_stack(&a, argc, argv);
	if (ft_is_duplicated(a))
		ft_exit("Error\n", 2);
	ft_read_instruction(&a, &b);
	if (ft_stack_len(b) == 0 && ft_is_sorted(a))
	{
		ft_free_stack(a);
		ft_exit("OK\n", 0);
	}
	else
	{
		ft_free_stack(a);
		ft_free_stack(b);
		ft_exit("KO\n", 1);
	}
	return (0);
}
