/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_instruction.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:17:07 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/22 11:46:55 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_check_instruction(t_stack **a, t_stack **b, char *str)
{
	if (!ft_strncmp("sa\n", str, 3))
		sa(a);
	else if (!ft_strncmp("sb\n", str, 3))
		sb(b);
	else if (!ft_strncmp("ss\n", str, 3))
		ss(a, b);
	else if (!ft_strncmp("pa\n", str, 3))
		pa(a, b);
	else if (!ft_strncmp("pb\n", str, 3))
		pb(b, a);
	else if (!ft_strncmp("rra\n", str, 4))
		rra(a);
	else if (!ft_strncmp("rrb\n", str, 4))
		rrb(b);
	else if (!ft_strncmp("rb\n", str, 3))
		rb(b);
	else if (!ft_strncmp("ra\n", str, 3))
		ra(a);
	else if (!ft_strncmp("rrr\n", str, 4))
		rrr(a, b);
	else if (!ft_strncmp("rr\n", str, 3))
		rr(a, b);
	else
		ft_exit("Error\n", 1);
}
