/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:27:00 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/28 11:30:46 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The memcmp() function compares
	byte string s1 against byte string s2.
Both strings are assumed to be n bytes long.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*sone;
	char	*stwo;
	size_t	i;

	if (n == 0)
		return (0);
	sone = (char *)s1;
	stwo = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (sone[i] != stwo[i])
			return ((unsigned char)sone[i] - (unsigned char)stwo[i]);
		i++;
	}
	return (0);
}

/*
int main(void)
{
	printf("%d\n", memcmp("hellA", "hellZ", 5));
	printf("%d\n", ft_memcmp("hellA", "hellZ", 5));
	return 0;
}
*/