/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtrxlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endarc <endarc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:31:07 by amaria-d          #+#    #+#             */
/*   Updated: 2022/11/08 11:40:05 by endarc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Gives len of matrix -> array of array
*/
size_t	ft_mtrxlen(void **m)
{
	size_t	i;

	i = 0;
	while (m[i] != NULL)
		i++;
	return (i);
}

/*
int main(void)
{
	printf("%zu\n", ft_strlen(""));
	printf("%zu\n", ft_strlen("a"));
	printf("%zu\n", ft_strlen("ab"));
	printf("%zu\n", ft_strlen("abc"));
	printf("%zu\n", ft_strlen("abcd"));
}
*/
