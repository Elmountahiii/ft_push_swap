#include "../push_swap.h"

int ft_b_bi(t_stack *a,t_stack *b)
{
    int b_bf_index;
   while (b)
   {
    b_bf_index = ft_bf_index(a,b->value);
    if (b_bf_index == 0)
        return (b->index);
    b = b->next;
   }
   return (-1);
}
