/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:51:51 by amaria-d          #+#    #+#             */
/*   Updated: 2022/02/16 13:54:12 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	to_lohexadecimal(unsigned int n)
{
	int	count;

	count = simple_putunbr_base(n, "0123456789abcdef");
	return (count);
}

int	to_uphexadecimal(unsigned int n)
{
	int	count;

	count = simple_putunbr_base(n, "0123456789ABCDEF");
	return (count);
}

int	to_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
