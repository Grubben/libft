/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:25:00 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/15 16:31:32 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
//     size_t  start;
//     size_t  dest_len;
//     size_t  src_len;
//     dest_len = ft_strlen(dst);
//     src_len = ft_strlen(src);
//     start = ft_strlen(dst);
//     if (dest_len < dstsize - 1 && dstsize > 0)
//     {
//         while ((start < dstsize - 1) && (*src != '\0'))
//         {
//             dst[start] = *src;
//             start++;
//             src++;
//         }
//         dst[start] = '\0';
//     }
//     if (dest_len >= dstsize)
//         dest_len = dstsize;
//     return (dest_len + src_len);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dst_init_len;
	size_t		i;

	dst_init_len = ft_strlen(dst);
	if (dstsize && dst_init_len < dstsize)
	{
		i = dst_init_len;
		while (i < dstsize - 1 && src[i - dst_init_len])
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
	char	*src = "AAAAAAAAA";
	char	dest[30];

	memset(dest, '\0', 5);
	printf("%d\n", ft_strlcat(dest, src, -1) == 14);
	
}
*/