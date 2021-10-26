/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:11:58 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/26 18:12:17 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	if (count == 0 || size == 0)
		return (NULL);
	ptr = malloc(count * size);
	i = 0;
	while (i < count * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/*
int	main(void)
{
	void	*ptrc;
	void	*ptrm;
	int		i;

	ptrc = calloc(3, 4);
	ptrm = malloc(12);
	i = 0;
	while (i < 12)
	{
		printf("%c__", ((char *)ptrm)[i] + 48);
		printf("%c\n", ((char *)ptrc)[i] + 48);
		i++;
	}
}
*/
