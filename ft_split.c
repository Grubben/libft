/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:44:19 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/09 20:43:13 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Receives string already strtrimmed

	nextd => next delimiter
	nextnd => next not delimiter
*/
static size_t	island_quant(char const *s, char c)
{
	char	*nextd;
	size_t	n;

	if (ft_strlen(s) == 0)
		return (0);
	nextd = ft_strchr(s, c);
	if (nextd == NULL || (size_t)(nextd - s) == ft_strlen(s))
		return (1);
	n = 0;
	while (nextd != NULL )
	{
		n = n + 1;
		s = ft_strnchr(nextd, c);
		nextd = ft_strchr(s, c);
	}
	return (n + 1);
}

static void	arr_setter(char const *s, char **arr, char c)
{
	size_t	islands_q;
	size_t	j;
	char	*nextd;

	islands_q = island_quant(s, c);
	j = 0;
	while (j < islands_q)
	{
		nextd = ft_strchr(s, c);
		if (nextd == NULL)
		{
			arr[j] = ft_substr(s, 0, ft_strlen(s));
			break ;
		}
		else
			arr[j] = ft_substr(s, 0, nextd - s);
		s = ft_strnchr(nextd, c);
		j++;
	}
}

/*
	Example string: "BBhelloBBuB"
	1) strtrim -> "helloBBu"
	2) island_quant: 2
	USE STRCHR AND STRRCHR!!!!!
*/
char	**ft_split(char const *s, char c)
{
	size_t	islands_q;
	char	*s_copy;
	char	*c_copy;
	char	**arr;

	c_copy = ft_calloc(2, 1);
	if (!c_copy)
		return (NULL);
	c_copy[0] = c;
	s_copy = ft_strtrim(s, c_copy);
	islands_q = island_quant(s_copy, c);
	arr = ft_calloc(islands_q + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	arr[islands_q * sizeof(char *)] = NULL;
	arr_setter(s_copy, arr, c);
	free(c_copy);
	free(s_copy);
	return (arr);
}

/*
int main(void)
{
	char	**tab;
	char	*splitme;
	
	splitme = strdup("--1-2--3---4----5-----42");
	tab = ft_split(splitme, '-');
	printf("%lu\n", strlen(tab[0]));
	// printf("%s\n", tab[1]);
	// printf("%s\n", tab[2]);
	// printf("%s\n", tab[3]);
	// printf("%s\n", tab[4]);
	// printf("%s\n", tab[5]);
	// printf("%s\n", tab[6]);
	// printf("%s\n", tab[7]);

	// printf("%zu\n", island_quant("", ' '));


}
*/