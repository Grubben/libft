#include "libft.h"

/*
 * This function will not check the last '\0'
 * Remember: pos is not index!
*/
size_t	ft_strpos(char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (i);
		i++;
	}
	return (0);
}

