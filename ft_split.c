/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:44:19 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/27 20:40:54 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	quant_char(char const *s, char c)
{
	size_t	q;
	size_t	i;

	q = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			q++;
		i++;
	}
	return (q);
}

static size_t	next_match(char const *s, char c)
{
	size_t	i;

	i = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	finds;
	size_t	next;
	size_t	j;
	char	*pos;
	char	**arr;

	finds = quant_char(s, c);
	j = 0;
	arr = malloc(finds * sizeof(char *) + 1);
	

	next = next_match(s, c);
	// No matches
	pos = (char *)s;
	if (next == 0)
		return ((char **)pos);
	while (next != 0)
	{
		arr[j] = malloc(next + 2);
		j++;
		strlcpy(arr[j], pos, next + 1);
		pos = pos + next;
		next = next_match(pos, c);
	}
	arr[j] = ft_calloc(1, 1);
	return (arr);
}