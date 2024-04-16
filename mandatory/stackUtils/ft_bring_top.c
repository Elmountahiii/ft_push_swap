#include "../push_swap.h"

void ft_bring_top(t_stack **stack, int i, void (*r)(t_stack **s), void (*rr)(t_stack **s))
{
    int len;
    int moves;

    len = ft_stack_len(*stack);
    if (i <= (len / 2))
        moves = i;
    else
        moves = len - i;

    if (i <= len / 2)
    {
        while (moves--)
            r(stack);
    }
    else
    {
        while (moves--)
            rr(stack);
    }
}