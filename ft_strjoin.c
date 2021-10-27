#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	ft_memmove(ptr, s1, ft_strlen(s1));
	ft_memmove(ptr + ft_strlen(s1), s2, ft_strlen(s2));
	ptr[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (ptr);
}

/*
int	main(void)
{
	printf("%s\n", ft_strjoin("", "gay"));

	return (0);
}
*/
