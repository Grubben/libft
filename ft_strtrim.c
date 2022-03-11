/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:26:33 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/15 18:33:45 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_quant_matches(char const *s, char const *set, int startLeft)
{
	size_t	len;
	size_t	i;

	if (startLeft)
	{
		i = 0;
		while (s[i] != '\0')
		{
			if (ft_charinside(s[i], set))
				i++;
			else
				return (i);
		}
	}
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		if (ft_charinside(s[len - 1 - i], set))
			i++;
		else
			break ;
	}
	return (i);
}

/* 56 -- what if start + end is bigger than len!!!!
	61 -- Presumes start is always inferior to end.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*new;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	start = ft_quant_matches(s1, set, 1);
	end = ft_quant_matches(s1, set, 0);
	if (start >= len - end)
		return (ft_calloc(1, 1));
	new = malloc(len - start - end + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (start + i < len - end)
	{
		new[i] = s1[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
int	main(void)
{
    char    *other;

    other = ft_strtrim("BBACBBBBBB", "B");
	printf("%s\n", other);
    free(other);

	return (0);
}
*/
