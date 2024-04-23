/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_instruction_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 21:59:16 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/23 22:42:41 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	ft_read_instruction(t_stack **a, t_stack **b)
{
	char	*instruction;

	instruction = get_next_line(0);
	while (instruction)
	{
		ft_check_instruction(a, b, instruction);
		instruction = get_next_line(0);
	}
	free(instruction);
}