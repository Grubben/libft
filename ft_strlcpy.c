/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:31:07 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/28 15:50:20 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strlcpy() and strlcat() take the full size of the
	destination buffer and guarantee NUL-termination if there is room.
    Note that room for the NUL should be included in dstsize.

strlcpy() copies up to dstsize - 1 characters from the string src to dst,
	NUL-terminating the result if dstsize is not 0.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize > 0)
	{
		i = 0;
		while (i < dstsize - 1)
		{
			if (src[i] == '\0')
				break ;
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
int		main(void)
{
	// char	empty[] = "";
	// char	hello1[] = "hello";
	// // char	good1[] = "goodbye";

	// char	hello2[] = "hello";
	// char	good2[] = "goodbye";

	char	src[] = "coucou";
	char	dest[10];


	// printf("%lu\n", strlcpy(hello1, good1, 6));
	// printf("%lu\n", ft_strlcpy(hello2, good2, 6));

	// printf("%s\n", hello1);
	// printf("%s\n", hello2);

	
	// strlcpy(hello1, "a", 5);
	// printf("%s\n", hello1);
	// ft_strlcpy(hello2, "a", 5);
	// printf("%s\n", hello2);

	memset(dest, 'A', 10);
	printf("%lu\n", strlcpy(dest, src, 1));
	// printf("%s\n", dest);
	// printf("%c\n", dest[1]);
	printf("%d\n", !strcmp(src, dest));
	printf("%c\n", dest[strlen(src) + 1]);
	
	return (0);
}
*/