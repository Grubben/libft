/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:45:30 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/28 11:15:16 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

void	*ft_memcpy(void *dest, const void *src, size_t n);

/*Presuposto que memcpy escreve da esquerda para a direita
 * IMPORTANTE
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			((char *)dst)[i - 1] = ((char *)src)[i - 1];
			i--;
		}
		return ((void *)dst);
	}
	return (ft_memcpy(dst, src, len));
}	

/*
int		main(void)
{
	char	hello1[30] = "girhello";
	char	hello2[30] = "girhello";
	int		size = 5;

	printf("%s\n", (char *)memmove(
								(void *)(hello1),
								(void *)(hello1 + 3),
								size));
	printf("%s\n", (char *)ft_memmove(
								(void *)(hello2),
								(void *)(hello2 + 3),
								size));
	
	return (0);
}
*/