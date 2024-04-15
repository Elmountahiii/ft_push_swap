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
   // t_stack *b;

    a = NULL;
   // b = NULL;
    if (argc < 2)
        return 0;
    init_stack(&a, argc, argv);
    print_stack_content(a);
    return 0;
}
