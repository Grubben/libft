/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:27:38 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/11 17:55:00 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

// void	ft_putnbr_fd(int n, int fd)
// {
// 	unsigned int	new;
// 	size_t			i;
// 	int				sign;
// 	char			digit[12];

// 	sign = 1;
// 	if (n < 0)
// 		sign = -1;
// 	new = n * sign;
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
// 	ft_putstr_fd(digit, fd);
// 	// fd = 5;
// 	// printf("%s\n", digit);
// }



void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(214748364, fd);
		ft_putchar_fd(8 + '0', fd);
		return ;
	}
	
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}

	while (n < 9)
	{
		ft_putnbr_fd(n % 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

/*
int	main(void)
{
	int		fd = open("trash.txt", O_RDWR | O_APPEND);
	ft_putnbr_fd(-1, fd);
}
*/