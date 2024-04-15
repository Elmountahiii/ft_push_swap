#include "lib.h"

int ft_is_nbr(char c)
{
    if(c >= '0' && c<= '9')
        return 1;
    return 0;
}