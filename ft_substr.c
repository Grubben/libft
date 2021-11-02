/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:38:49 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/27 19:39:11 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	i;
	char	*ptr;

	slen = ft_strlen(s);
	if (start < slen)
	{
		ptr = malloc(slen - start + 1);
		if (!ptr)
			return (NULL);
		i = 0;
		while (start + i < slen && i < len)
		{
			ptr[i] = s[start + i];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	ptr = malloc(1);
	ptr[0] = '\0';
	return (ptr);
}
/*	return (NULL);*/

/*
int	main(void)
{
    char    *s;

	// s = ft_substr("tripouille", 1, 1);
    // printf("%s__%d\n", s, !strcmp(s, "r"));

   	s = ft_substr("tripouille", 100, 1);
	// printf("%s__%d\n", s, !strcmp(s, ""));
	if (!strcmp(s, ""))
		printf("it's null\n");

	// printf("%s\n", ft_substr("goodbye", 4, 10));
}
*/