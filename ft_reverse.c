#include "libft.h"

/* reverse:  reverse string s in place */
void reverse(char *s)
{
	int i, j;
    char c;
	
	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
        c = s[i];
        s[i] = s[j];
        s[j] = c;
		i++;
		j--;
	}
}  
