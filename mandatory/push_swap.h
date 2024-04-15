#ifndef	PUSh_SWAP_H
#define	PUSh_SWAP_H

#include <unistd.h>
#include <stdlib.h>
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
#endif