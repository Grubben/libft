/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:31:07 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/09 20:46:57 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	ft_memmove(ptr, s1, ft_strlen(s1));
	ft_memmove(ptr + ft_strlen(s1), s2, ft_strlen(s2));
	ptr[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (ptr);
}

/*
int	main(void)
{
	printf("%s\n", ft_strjoin("", "gay"));

	return (0);
}
*/
