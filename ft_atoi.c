/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:56:30 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/10 18:43:14 by amaria-d         ###   ########.fr       */
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
	while ((str[i] == ' ' || str[i] == '\n'
			|| str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\r' || str[i] == '\f') && str[i])
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (! (48 <= str[i] && str[i] <= 57))
			return (num * sign);
		num = (num * 10) + str[i] - '0';
		i++;
	}
	return (num * sign);
}

/*
int main(void)
{
	printf("%d\n", atoi("    -214748365"));
	printf("%d\n", ft_atoi("    -214748365"));
	return 0;
}
*/