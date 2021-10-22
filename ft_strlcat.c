/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:25:00 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/21 18:25:29 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dst_init_len;
	size_t		i;

	dst_init_len = ft_strlen(dst);
	if (dstsize)
	{
		i = ft_strlen(dst);
		while (i < dstsize - 1)
		{
			dst[i] = src[i - dst_init_len];
			i++;
		}
		dst[dst_init_len + i] = '\0';
	}
	if (dstsize > dst_init_len)
		return (ft_strlen(src) + dst_init_len);
	return (ft_strlen(src) + dstsize);
}
/*
int main(void)
{
	char	hello1[20] = "hello";
	char	good1[] = "goodbye";

	char	hello2[20] = "hello";
	char	good2[] = "goodbye";

	int		size = 20;

	printf("%lu\n", strlcat(hello1, good1, size));
	printf("%s\n\n", hello1);

	printf("%lu\n", ft_strlcat(hello2, good2, size));
	printf("%s\n", hello2);
}
*/