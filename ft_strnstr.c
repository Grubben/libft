#include "libft.h"
/*
run throguh haystack looking for first letter of needle
if found strcmp the two for the lenght of needle
if result is 0 means they are the same there and that first letter is indeed succesful
if not continue until final '\0'
*/

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;

    i = 0;
    while (haystack[i] != '\0' && i < len)
    {
        if (haystack[i] == needle[0])
        {
            if (ft_strncmp(haystack + i, needle, ft_strlen(needle)) == 0)
                return ((char *)haystack + i);
        }
        i++;
    }
    return (NULL);
}

int	main(void)
{
	char	BIG[] = "goodbye";
	char	SMALL[] = "d";
	size_t	SIZE = 7;

	printf("%s\n", strnstr(BIG, SMALL, SIZE));
	printf("%s\n", ft_strnstr(BIG, SMALL, SIZE));
}
