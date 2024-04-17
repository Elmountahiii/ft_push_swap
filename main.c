#include "./mandatory/push_swap.h"

void print_stack_content(t_stack *stack)
{
    while (stack)
    {
        printf("%d : %d\n",stack->index,stack->value);
        stack = stack->next;
    }
}
int main(int argc, char **argv)
{
    t_stack *a;
   t_stack *b;

    a = NULL;
   b = NULL;
    if (argc < 2)
        return 0;
    ft_init_stack(&a, argc, argv);
    if(ft_is_duplicated(a))
        ft_exit("Error",1);
    if (ft_is_sorted(a))
        return (0);
    ft_push_swap(&a, &b);
   // print_stack_content(a);
    return 0;
}
