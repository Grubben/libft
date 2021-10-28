/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:31:47 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/28 11:36:13 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strchr() function locates the first occurrence
	of c (converted to a char) in the string pointed to by s.
	The terminating null character is considered to be part of the
    string; therefore if c is `\0', the functions locate the terminating `\0'.

The strrchr() function is identical to strchr(), except it
	locates the last occurrence of c.
*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = len;
	while (i < len + 1)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*
int main(void)
{
	printf("%s\n", strrchr("\0tacat", '\0'));
	printf("%s\n", ft_strrchr("\0tacat", '\0'));
	return 0;
}
*/