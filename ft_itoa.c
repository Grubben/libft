/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:28:59 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/16 12:06:27 by amaria-d         ###   ########.fr       */
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
// 	char			digit[12];
// 	char			*final;
// 	signed char		sign;
// 	unsigned int	new;

// 	sign = 1;
// 	if (n < 0)
// 		sign = -1;
// 	new = n * sign;
// 	ft_memset(digit, 0, 12);
// 	n = 0;
// 	if (new == 0)
// 		digit[n++] = 0 + '0';
// 	while (new != 0)
// 	{
// 		digit[n++] = new % 10 + '0';
// 		new = new / 10;
// 	}
// 	if (sign < 0)
// 		digit[n] = '-';
// 	ft_reversen(digit, n + 1);
// 	final = ft_strdup(digit);
// 	if (!final)
// 		return (NULL);
// 	return (final);
// }

void	auxPos(char *s, unsigned int n)
{
	static unsigned int	i;

	i = 0;
	if (n > 9)
		auxPos(s, n/10);
	s[i] = n;
	i++;
}

void	auxNeg(char *s, int n)
{
	static unsigned int i;

	i = 0;
	s[i] = '-';
	i++;
	if (n > 9)
		auxPos(s, (-n)/10);
}

char	*ft_itoaE(int n)
{
	char	digit[11];

	if (n < 0)
		auxNeg(digit, n);
	else
		auxPos(digit, n);
	return (ft_strdup(digit));
}

// /*
int	main(void)
{

	printf("%s\n", ft_itoa(-2147483648));

	return (0);
}
// */