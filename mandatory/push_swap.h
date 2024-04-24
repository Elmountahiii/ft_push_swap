/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:00:46 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/24 11:48:51 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../lib/lib.h"
# include "../lib/get_nex_line/get_next_line.h"

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
void	ft_print(char *str, int fd);
void	ft_exit(char *str, int status);
int		count_words(char *str);
char	**ft_split(char *str);
t_stack	*create_node(t_stack *parent, int nbr);
void	add_node_back(t_stack **stack, int nbr);
int		ft_atoi(char *nbr);
void	ft_init_stack(t_stack **a, int argc, char **argv);
int		ft_stack_len(t_stack *stack);
int		ft_is_sorted(t_stack *stack);
int		ft_is_duplicated(t_stack *stack);
void	ft_sort_3(t_stack **a);
t_stack	*ft_stack_min(t_stack *stack);
void	ft_split_stack(t_stack **a, t_stack **b, int len);
void	ft_push_swap(t_stack **a, t_stack **b);
void	ft_update_stack_index(t_stack *a, t_stack *b);
t_stack	*ft_best_match(t_stack *stack, int value);
size_t	ft_get_stack_average(t_stack *stack);
void	ft_sort(t_stack **a, t_stack **b);
void	ft_setup_nodes(t_stack **a, t_stack **b);
void	ft_update_positions(t_stack *a, t_stack *b);
void	ft_get_targets(t_stack *a, t_stack *b);
void	ft_calculate_cost(t_stack *a, t_stack *b);
void	ft_mark_best(t_stack *b);
t_stack	*ft_get_best_move(t_stack *b);
void	ft_revers_move(t_stack **a, t_stack **b, \
	t_stack *bm, void (*f)(t_stack **a, t_stack **b));
void	ft_rotate_move(t_stack **stack, t_stack *target, \
	void (*r)(t_stack **s), void (*rr)(t_stack **s));
void	ft_push_best(t_stack **a, t_stack **b);
void	ft_free_stack(t_stack *s);
#endif