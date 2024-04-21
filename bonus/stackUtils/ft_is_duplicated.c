#include "../checker.h"

int ft_is_duplicated(t_stack *stack)
{
    t_stack *tmp;
    t_stack *tmp2;

    tmp = stack;
    while (tmp)
    {
        tmp2 = tmp->next;
        while (tmp2)
        {
            if (tmp->value == tmp2->value)
                return 1;
            tmp2 = tmp2->next;
        }
        tmp = tmp->next;
    }
    return 0;
}