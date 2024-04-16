#include "../push_swap.h"

int ft_bf_index(t_stack *stack, int value)
{
   int bf_index;
   int bf_value;

   bf_index = -1;
   bf_value = INT_MAX;
   while (stack)
   {
       if (stack->value > value)
       {
          if (stack->value < bf_value)
            {
                bf_value = stack->value;
                bf_index = stack->index;
            }
       }
       stack = stack->next;
   }
   return (bf_index);   
}