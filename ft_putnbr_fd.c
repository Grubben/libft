/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:27:38 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/10 19:37:02 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	new;
	size_t			i;
	int				sign;
	char			digit[12];

	sign = 1;
	if (n < 0)
		sign = -1;
	new = n * sign;
	i = 0;
	if (new == 0)
		digit[i++] = 0 + '0';
	while (new != 0)
	{
		digit[i] = new % 10 + '0';
		new = new / 10;
		i++;
	}
	if (sign < 0)
		digit[i] = '-';
	ft_reversen(digit, i + 1);
	ft_putstr_fd(digit, fd);
}
