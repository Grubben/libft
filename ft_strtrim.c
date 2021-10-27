#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*new;

	start = 0;
	while (s1[start] != '\0')
	{
		if (ft_charinside(s1[start], set))
			start++;
		else
			break;
	}
	len = ft_strlen(s1) ;
	end = 0;
	while (end < len)
	{
		if (ft_charinsde(s1[len - 1 - end], set))
			end++;
		else
			break;
	}
	// what if start + end is bigger than len!!!!
	new = malloc(len - start - end);
	if (!new)
		return (NULL);
	// Presumes start is always inferior to end.
	i = start;
	while (i < len - end)
	{
		new[i] = s1[i];
		i++;
	}
	return (new);
}

int	main(void)
{

}
