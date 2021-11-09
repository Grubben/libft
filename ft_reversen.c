/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reversen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:31:01 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/09 10:34:00 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* reverse:  reverse string s in place */
void	ft_reversen(char *s, unsigned int n)
{
	char	c;
	int		i;
	int		j;

	if (n < 2)
		return ;
	j = n - 1;
	if (n > ft_strlen(s))
		j = ft_strlen(s) - 1;
	i = 0;
	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}

/*
int	main(void)
{
	char	string[] = "12345";

	ft_reversen(string, 1);
	printf("%s\n", string);
}
*/