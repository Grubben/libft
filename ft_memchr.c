/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:55:04 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/28 11:29:46 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The memchr() function locates the first occurrence
	of c (converted to an unsigned char) in string s.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *) s)[i] == (unsigned char)c)
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