#include "../push_swap.h"

t_stack *ft_best_match(t_stack *stack, int value)
{
   t_stack *best_match;
   int bf_value;

   best_match = NULL;
   bf_value = INT_MAX;
   while (stack)
   {
       if (stack->value > value)
       {
          if (stack->value < bf_value)
            {
                bf_value = stack->value;
                best_match = stack;
            }
       }
       stack = stack->next;
   }
   return (best_match);   
}