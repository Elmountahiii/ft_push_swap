#include "../push_swap.h"

void ft_sort_stack(t_stack **a,t_stack **b)
{
    while (*b)
    {
        if(ft_best_move(a, b) == 1)
            break;
        pa(a, b);
    }
    
    while (!ft_is_sorted(*a))
       rra(a);

    
}