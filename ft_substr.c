#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	ptr = malloc(ft_strlen(s) - start);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	return (ptr);
}

/*
int	main(void)
{
	printf("%s\n", ft_substr("goodbye", 4, 10));
}
*/
