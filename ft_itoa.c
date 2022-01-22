/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:28:59 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/16 12:49:57 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	1) make 12 places: the minus, each digit and the '\0'

*/

char	*ft_itoa(int n)
{
	char			digit[12];
	char			*final;
	signed char		sign;
	unsigned int	new;

	sign = 1;
	if (n < 0)
		sign = -1;
	new = n * sign;
	ft_memset(digit, 0, 12);
	n = 0;
	if (new == 0)
		digit[n++] = 0 + '0';
	while (new != 0)
	{
		digit[n++] = new % 10 + '0';
		new = new / 10;
	}
	if (sign < 0)
		digit[n] = '-';
	ft_reversen(digit, n + 1);
	final = ft_strdup(digit);
	if (!final)
		return (NULL);
	return (final);
}

/*
void	aux(char *s, long int n)
{
	static unsigned int	i = 0;

	if (n < 0)
	{
		s[i] = '-';
		i++;
		aux(s, -n);
		return ;
	}
	if (n > 9)
		aux(s, n/10);
	s[i] = (n % 10) + '0';
	i++;
}

char	*ft_itoa(int n)
{
	char	digit[12];

	ft_memset(digit, 0, 12);
	aux(digit, n);
	return (ft_strdup(digit));
}
*/

/*
int	main(void)
{

	printf("%s\n", ft_itoa(-623));

	printf("%s\n", ft_itoa(156));

	printf("%s\n", ft_itoa(-0));

	return (0);
}
*/
