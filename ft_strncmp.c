/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:36:33 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/28 15:15:39 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
int main(void)
{
	char	word1[] = "helloBgoZ";
	char	word2[] = "helloBgoQ";
	int		size	= 9;
	printf("%d\n", strncmp(word1, word2, size));
	printf("%d\n", ft_strncmp(word1, word2, size));
	return 0;
}
*/