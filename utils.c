/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:02:24 by amaria-d          #+#    #+#             */
/*   Updated: 2022/02/16 14:09:17 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	base_check(char *base)
{
	if (ft_strlen(base) < 2)
	{
		return (0);
	}
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-')
		{
			return (0);
		}
		if (ft_charinside(*base, base + 1))
		{
			return (0);
		}
		++base;
	}
	return (1);
}

size_t	num_len(ssize_t nbr)
{
	size_t	count;

	if (nbr >= 0 && nbr < 10)
		return (1);
	count = 0;
	if (nbr < 0)
		count = 1;
	while (nbr != 0)
	{
		count++;
		nbr = nbr / 10;
	}
	return (count);
}
