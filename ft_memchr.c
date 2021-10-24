/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:55:04 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/24 11:25:39 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *) s)[i] == '\0')
			return (NULL);
		if (((char *) s)[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/*
int main()
{
	printf("%s\n", (char *)ft_memchr("hello", 'l', 5));
	return 0;
}
*/