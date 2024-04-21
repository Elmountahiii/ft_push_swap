#include "../checker.h"

int ft_atoi(char *nbr)
{
    int result;
    int sign;
    int temp;
    int i;

    i = 0;
    result = 0;
    temp = 0;
    if(ft_is_sign(nbr[i]))
        sign = ft_get_sign(nbr[i++]);
    else
        sign = 1;
    
    if (nbr[i] == '\0' || !ft_is_nbr(nbr[i]))
        ft_exit("Error\n",1);
    
    while (nbr[i] != '\0')
    {
        if (ft_is_nbr(nbr[i]))
        {
            temp = result;
            result = result * 10 + (nbr[i] - '0');
            if (((result < temp) && sign > 0 ) ||  ( (result <  temp) && sign  < 0  && result != -2147483648))
                    ft_exit("Error",1);
        }
        else
            ft_exit("Error\n",1);
        i++;
    }
    return (result * sign);
}
