#include "../push_swap.h"

void ft_split_stack(t_stack **a, t_stack **b, int len)
{
    int i;
    int average;
    

    i = 0;
    average = (ft_stack_max(*a) - ft_stack_min(*a)) / 2;
    while (i < len)
    {
        if ((*a)->value < average)
        {
            pb(b, a);
            
        }
        else
            ra(a);
        i++;
    }
    while (ft_stack_len(*a) > 3)
        pb(b, a);
}