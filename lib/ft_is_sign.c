#include "lib.h"

int ft_is_sign(char sign)
{
    if (sign == '+' || sign == '-')
        return (1);
    return (0);
}