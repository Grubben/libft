/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplePnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:03:27 by amaria-d          #+#    #+#             */
/*   Updated: 2022/02/16 12:05:39 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	simple_putunbr_base(size_t nbr, char *base)
{
	size_t	count;

	count = 0;
	if (!base_check(base))
		return (0);
	if (nbr >= ft_strlen(base))
	{
		count = simple_putunbr_base(nbr / ft_strlen(base), base);
	}
	ft_putchar_fd(base[nbr % ft_strlen(base)], 1);
	return (count + 1);
}

size_t	simple_putnbr_base(ssize_t nbr, char *base)
{
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1);
		return (simple_putunbr_base(-nbr, base) + 1);
	}
	return (simple_putunbr_base(nbr, base));
}

/*
int	main(void)
{
	simplePutUnbrBase(890, "0123456789abcdef");
	printf("\n");
	simplePutNbrBase(-890, "0123456789abcdef");
}
*/
