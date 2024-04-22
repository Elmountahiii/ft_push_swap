/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:39:01 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/21 19:45:23 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./mandatory/push_swap.h"

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
		ft_exit("Error", 1);
	if (ft_is_sorted(a))
		return (0);
	ft_push_swap(&a, &b);
	return (0);
}
