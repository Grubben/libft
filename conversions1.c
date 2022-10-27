/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:50:10 by amaria-d          #+#    #+#             */
/*   Updated: 2022/02/16 13:54:00 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	to_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	to_pointer(void *ptr)
{
	int		count;

	ft_putstr_fd("0x", 1);
	count = 2;
	count += simple_putunbr_base((size_t)ptr, "0123456789abcdef");
	return (count);
}

int	to_string(char *ptr)
{
	size_t	len;

	if (!ptr)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	len = ft_strlen(ptr);
	write(1, ptr, len);
	return (len);
}

int	to_decimal(int n)
{
	int	count;

	count = num_len(n);
	ft_putnbr_fd(n, 1);
	return (count);
}

int	to_udecimal(unsigned int n)
{
	int	count;

	count = num_len(n);
	simple_putunbr_base(n, "0123456789");
	return (count);
}

/*
int main(void)
{
	size_t	count;

	char	*ptr;
	ptr = NULL;
	printf("\n%d\n", toPointer(ptr));
	count = printf("%p", ptr);
	char	*ptr = "1";
	count = toString(ptr);
	int	n = 0123;
	count = toDecimal(&n);
	unsigned int n = 0;
	printf("%u\n", n);
	count = toUdecimal(&n);
	unsigned int	n = 42949672;
	count = toLoHexadecimal(&n);
	printf("\n%x", n); 
	unsigned int	n = 42949672;
	count = toUpHexadecimal(&n);
	printf("\n%X", n); 
	count = toPercent();
	printf("\n%%");
	printf("\n%zu\n", count);
}
*/
