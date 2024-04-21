#include "../checker.h"

void    ft_init_stack(t_stack **a,int argc, char **argv)
{
    int i;
    int j;
    i = 1;
    j = 0;

    if(argc >= 2)
     {
        while (i < argc)
        {
            j = 0;
            char **split = ft_split(argv[i]);
            while (split && split[j])
            {
               add_node_back(a, ft_atoi(split[j]));
               j++;
            }      
            i ++;
        }
     }
}