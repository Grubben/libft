/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:16:55 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/09 10:34:42 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * This function will not check the last '\0'
*/
char	*ft_strnchr(char *s, int c)
{
	while (*s != '\0')
	{
		if (*s != (char)c)
			return (s);
		s++;
	}
	return (NULL);
}

/*
int main(void)
{
	printf("%s\n", ft_strnchr("cccabc", 'c'));
	return 0;
}
*/
