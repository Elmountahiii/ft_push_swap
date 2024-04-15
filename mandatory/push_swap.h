#ifndef	PUSh_SWAP_H
#define	PUSh_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../lib/lib.h"

typedef struct s_stack
{
    struct s_stack *prev;
    int value;
    int index;
    struct  s_stack *next;
} t_stack;


void    push(t_stack **from , t_stack **to);
void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **b, t_stack **a);
void    swap(t_stack **stack);
void    sa(t_stack **a);
void    sb(t_stack **b);
void    ss(t_stack **a, t_stack **b);
void    rotate(t_stack **stack);
void    ra(t_stack **a);
void    rb(t_stack **b);
void    rr(t_stack **a,t_stack **b);
void    reversRotate(t_stack **stack);
void    rra(t_stack **a);
void    rrb(t_stack **b);
void    rrr(t_stack **a,t_stack **b);
void    ft_print(char *str);
void    ft_exit(char *str,int status);
int     count_words(char *str);
char	**ft_split(char *str);
t_stack  *create_node(t_stack *parent ,int nbr);
void    add_node_back(t_stack **stack, int nbr);
int     ft_atoi(char *nbr);
void    ft_init_stack(t_stack **a,int argc, char **argv);
void    print_stack_content(t_stack *stack);
int     ft_stack_len(t_stack *stack);
int     ft_is_sorted(t_stack *stack);
int     ft_is_duplicated(t_stack *stack);
#endif