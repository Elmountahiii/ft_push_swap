#include "../push_swap.h"

void ft_push_swap(t_stack **a, t_stack **b)
{
    ft_split_stack(a, b, ft_stack_len(*a));
    ft_sort_3(a);
}