/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:56:30 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/24 13:30:48 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	num;
	signed char		sign;
	size_t			i;

	sign = 1;
	num = 0;
	i = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			sign = -1;
		i = 1;
	}
	while (str[i] != '\0')
	{
		if (! (48 <= str[i] && str[i] <= 57))
			return (0);
		num = (num * 10) + str[i] - '0';
		i++;
	}
	return (num * sign);
}

/*
int main(void)
{
	printf("%u\n", atoi("-2147483650"));
	printf("%u\n", ft_atoi("-2147483650"));
	return 0;
}
*/