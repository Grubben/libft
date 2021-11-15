/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:28:59 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/15 21:36:13 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	ft_reversen(char *s, unsigned int n)
// {
// 	char	c;
// 	int		i;
// 	int		j;

// 	if (n < 2)
// 		return ;
// 	j = n - 1;
// 	if (n > ft_strlen(s))
// 		j = ft_strlen(s) - 1;
// 	i = 0;
// 	while (i < j)
// 	{
// 		c = s[i];
// 		s[i] = s[j];
// 		s[j] = c;
// 		i++;
// 		j--;
// 	}
// }

/*
	1) make 12 places: the minus, each digit and the '\0'

*/

// char	*ft_itoa(int n)
// {
// 	char			*digit;
// 	signed char		sign;
// 	unsigned int	new;
// 	unsigned int	i;

// 	sign = 1;
// 	if (n < 0)
// 		sign = -1;
// 	new = n * sign;
// 	digit = ft_calloc(12, sizeof(signed char));
// 	if (!digit)
// 		return (NULL);
// 	i = 0;
// 	if (new == 0)
// 		digit[i++] = 0 + '0';
// 	while (new != 0)
// 	{
// 		digit[i] = new % 10 + '0';
// 		new = new / 10;
// 		i++;
// 	}
// 	if (sign < 0)
// 		digit[i] = '-';
// 	ft_reversen(digit, i + 1);
// 	return (digit);
// }

char	*ft_itoa(int n)
{
	static char		digit[11];
	static	size_t	i;
	
	i = 0;

	if (n > 9)
	{
		return ft_itoa(n / 10);
	}
	digit[i] = n / 10 + 48;
	i++;

	return (ft_strdup(digit));
}

// /*
int	main(void)
{

	printf("%s\n", ft_itoa(648));

	return (0);
}
// */