/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:27:00 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/24 11:35:50 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0 || (ft_strlen(s1) == 0 || ft_strlen(s2) == 0))
		return (0);
	i = 0;
	while (i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
			return (((char *)s1)[i] - ((char *)s2)[i]);
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