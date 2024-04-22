/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:10:32 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 11:47:13 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*instruction;

	a = NULL;
	b = NULL;
	instruction = NULL;
	if (argc < 2)
		return (0);
	ft_init_stack(&a, argc, argv);
	if (ft_is_duplicated(a))
		ft_exit("Error\n", 1);
	instruction = get_next_line(0);
	while (instruction)
	{
		ft_check_instruction(&a, &b, instruction);
		instruction = get_next_line(0);
	}
	if (ft_stack_len(b) == 0 && ft_is_sorted(a))
		ft_exit("OK\n", 0);
	else
		ft_exit("KO\n", 1);
	return (0);
}
