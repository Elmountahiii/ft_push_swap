#include "../push_swap.h"

void ft_split_stack(t_stack **a, t_stack **b, int len)
{
    int i;
    int average;

    i = 0;
    if (len == 3)
        return ;
    if (len == 5)
    {
        pb(b, a);
        pb(b, a);
        return ;
    }
    while (i < len)
    {
         average = ft_get_stack_average(*a);
        if ((*a)->value < average)
            pb(b, a);
        else
            ra(a);
        i++;
    }
    while (ft_stack_len(*a) > 3)
        pb(b, a);
}