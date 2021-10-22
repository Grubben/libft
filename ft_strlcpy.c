#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;

	if (dstsize)
	{
		i = 0;
		while (i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}


/*
#include <stdio.h>
#include <string.h>


int		main(void)
{
	char	hello1[] = "hello";
	char	good1[] = "goodbye";

	char	hello2[] = "hello";
	char	good2[] = "goodbye";


	printf("%lu\n", strlcpy(hello1, good1, 6));
	printf("%lu\n", ft_strlcpy(hello2, good2, 6));

	printf("%s\n", hello1);
	printf("%s\n", hello2);

	return (0);
}
*/
