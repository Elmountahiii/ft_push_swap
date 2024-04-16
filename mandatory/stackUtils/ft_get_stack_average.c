#include "../push_swap.h"

size_t ft_get_stack_average(t_stack *stack)
{
 
   int len;
   int sum;

    len = ft_stack_len(stack);
    sum = 0;
    while (stack)
    {
        sum += stack->value;
        stack = stack->next;
    }
    return (sum / len);
}