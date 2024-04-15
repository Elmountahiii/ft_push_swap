#include "lib.h"

int ft_get_sign(char sign)
{
    if (sign == '+')
        return 1;
    if (sign == '-')
        return -1;
    if(ft_is_nbr(sign))
        return 1;
    return 0;
}