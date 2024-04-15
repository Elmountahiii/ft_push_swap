#include "lib.h"

char *ft_substr(char *str,int start)
{
    int		len;
	int		end;
    char	*sub;
    int		i;
	i = 0;
	while (str[i+start])
	{
		if (is_space(str[i+start]))
			break;
		i ++;
	}
	end = start + i;     
	len = end - start;
	i = 0;
	sub = malloc(sizeof(char) * (len + 1));
	if(!sub)
		return(NULL);
	while (str[i + start] && i < len)
	{
		sub[i] = str[i + start];
		i ++;
	}
	sub[i] = '\0';
	return (sub);
}