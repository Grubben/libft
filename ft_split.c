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

/*
	Receives string already strtrimmed

	nextd => next delimiter
	nextnd => next not delimiter
*/
static size_t	island_quant(char *s, char c)
{
	char	*nextd;
	size_t	n;

	n = 0;
	nextd = ft_strchr(s, c);
	if ((unsigned long)(nextd - s) == ft_strlen(s))
		return (1);
	while (nextd != NULL )
	{
		n = n + 1;
		s = ft_strnchr(nextd, c);
		nextd = ft_strchr(s, c);
	}
	return (n + 1);
}


// static void arr_setter(char *s, char **arr, char c)
// {

// }

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
	char	**arr;
	char	*nextd;
	size_t	islands_q;
	size_t	j;

	c_copy = ft_calloc(2, 1);
	c_copy[0] = c;
	s_copy = ft_strtrim(s, c_copy);

	islands_q = island_quant(s_copy, c);
	
	arr = ft_calloc(islands_q + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	arr[islands_q * sizeof(char *)] = NULL;


	j = 0;
	while (j < islands_q)
	{
		nextd = ft_strchr(s_copy, c);

		if (nextd == NULL)
		{
			arr[j] = ft_substr(s_copy, 0, ft_strlen(s_copy));
			break ;
		}
		else
			arr[j] = ft_substr(s_copy, 0, nextd - s_copy);

		s_copy = ft_strnchr(nextd, c);
		j++;
	}

	free(c_copy);
	// free(s_copy);
	return (arr);
}

// /*
int main(void)
{
	char **tab;
	
	// tab = ft_split("  tripouille  42  ", ' ');
	tab	= ft_split("tripouille", 0);
	// // tab = ft_split("BBhelloBBuBaBBB", 'B');

	// printf("%s\n", tab[0]);
	// printf("%s\n", tab[1]);
	// printf("%s\n", tab[2]);
	// // printf("%s\n", tab[3]);
	// // printf("%d\n", tab[2] == NULL);
	printf("%d\n", !strcmp(tab[0], "tripouille"));
	// printf("%zu\n", island_quant("tripouille", 0));

}
// */