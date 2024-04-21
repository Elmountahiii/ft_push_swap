#include "lib.h"

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	t;

	t = 0;
	while ((s1[t] != '\0' || s2[t] != '\0') && t < n)
	{
		if (s1[t] != s2[t])
			return ((unsigned char)s1[t] - (unsigned char)s2[t]);
		t ++;
	}
	return (0);
}