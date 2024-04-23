/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:13:32 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/23 22:39:12 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../lib/lib.h"

typedef struct s_stack
{
	struct s_stack	*prev;
	int				value;
	int				index;
	int				top;
	int				cost;
	int				best_move;
	struct s_stack	*target;
	struct s_stack	*next;
}	t_stack;

void	push(t_stack **from, t_stack **to);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **b, t_stack **a);
void	swap(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	rotate(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	revers_rotate(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
t_stack	*create_node(t_stack *parent, int nbr);
void	add_node_back(t_stack **stack, int nbr);
void	ft_init_stack(t_stack **a, int argc, char **argv);
int		ft_is_duplicated(t_stack *stack);
int		ft_is_sorted(t_stack *stack);
int		ft_atoi(char *nbr);
void	ft_exit(char *str, int status);
void	ft_print(char *str);
char	**ft_split(char *str);
void	ft_check_instruction(t_stack **a, t_stack **b, char *str);
int		ft_stack_len(t_stack *stack);
void	ft_free_stack(t_stack *s);
void	ft_read_instruction(t_stack **a, t_stack **b);
#endif