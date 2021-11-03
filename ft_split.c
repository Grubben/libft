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

static size_t	next_not_match(char const *s, char c)
{
	size_t	i;

	i = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			return (i);
		i++;
	}
	return (0);
}

/*
    Receives string already strtrimmed

    nexty => next_yes delimiter
    nextn => next_not delimiter
*/
static size_t	island_quant(char *s, char c)
{
	size_t	nexty;
	size_t	nextn;
	size_t	n;

	n = 0;
	nexty = next_match(s, c);
	while (nexty < ft_strlen(s) - 1 )
	{
		n = n + 1;
		nextn = nexty + next_not_match(s + nexty, c);
		nexty = nextn + next_match(s + nextn, c);
	}
	return (n + 1);
}

/*
    Example string: "BBhelloBBuB"
    1) strtrim -> "helloBBu"
    2) island_quant: 2
	USE STRCHR AND STRRCHR!!!!!
*/
char	**ft_split(char const *s, char c)
{
	char	*s_copy;
	char	*c_copy;
	size_t	islands_q;
	size_t	nexty;
	size_t	j;
	char	**arr;

	c_copy = ft_calloc(2, 1);
	c_copy[0] = c;
	s_copy = ft_strtrim(s, c_copy);

	islands_q = island_quant(s_copy, c);
	
	arr = ft_calloc(1, islands_q * sizeof(char *) + 1);
	if (!arr)
		return (NULL);
	arr[islands_q * sizeof(char *)] = NULL;
	nexty = next_match(s_copy, c);
	j = 0;
	while (j < islands_q)
	{
		arr[j] = ft_substr(s_copy, 0, nexty);
		if (nexty == 0)
			arr[j] = ft_substr(s_copy, 0, ft_strlen(s_copy));
		s_copy = s_copy + nexty + next_not_match(s_copy + nexty, c);
		nexty = next_match(s_copy, c);
		j++;
	}
	return (arr);
}

/*
int main(void)
{
    char **tab;
    
    // tab = ft_split("  tripouille  42  ", ' ');
	tab = ft_split("BBhelloBBuBaBBB", 'B');
	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	printf("%s\n", tab[3]);

}
*/
