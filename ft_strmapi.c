#include "libft.h"

/*Don't know wwhat the int in the `f` function is supposed to be*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*new;

	len = ft_strlen(s);
	new = ft_calloc(len + 1, sizeof(char));
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
