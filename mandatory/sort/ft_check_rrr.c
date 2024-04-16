#include "../push_swap.h"

int ft_check_rrr(t_stack *a, t_stack *b)
{
    int b_last;
    int a_last;
    int b_bf_index;
    int a_last_index;

    b_last = ft_get_stack_last(b);
    a_last = ft_get_stack_last(a);
    a_last_index = ft_index_by_value(a, a_last);
    b_bf_index = ft_bf_index(a, b_last);
    if (b_bf_index == a_last_index)
        return (1);
    return (0);
}