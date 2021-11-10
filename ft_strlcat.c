/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:25:00 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/10 18:37:24 by amaria-d         ###   ########.fr       */
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
		i = dst_init_len;
		while (i < dstsize - 1)
		{
			dst[i] = src[i - dst_init_len];
			i++;
		}
		dst[i] = '\0';
	}
	if (dstsize > dst_init_len)
		return (ft_strlen(src) + dst_init_len);
	return (ft_strlen(src) + dstsize);
}

/*
int main(void)
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[3840] = "\0there is no stars in the sky";
	char buff2[3840] = "\0there is no stars in the sky";
	size_t max = 47;

	strlcat(buff2, str, max);
	printf("%d\n", strcmp(buff1, buff2));
	printf("%s\n", buff1);
	printf("%s\n", buff2);
	
}
*/