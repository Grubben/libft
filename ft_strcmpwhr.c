#include "libft.h"

/* Gives pos where the strings diverge
 * Not idx! 0 is wrong: 1 is first ([0])
 * 2 is second ([1]) ...
*/
size_t	ft_strcmpwhr(const char *s1, const char *s2)
{
	size_t	i;

	if (!s1 && !s2)
		return (0);
	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (i + 1);
		i++;
	}
	return (i + 1);
}

