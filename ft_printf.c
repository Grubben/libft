/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:48:45 by amaria-d          #+#    #+#             */
/*   Updated: 2022/10/18 15:01:53 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_replace(const char *str);
int	convert(const char *str, va_list pargs);

int	ft_printf(const char *format, ...)
{
	va_list	pargs;
	int		count;

	va_start(pargs, format);
	count = 0;
	while (*format)
	{
		if (is_replace(format))
		{
			format++;
			count += convert(format, pargs);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			count++;
		}
		format++;
	}
	va_end(pargs);
	return (count);
}

int	is_replace(const char *str)
{
	if (*str == '%')
	{
		if (ft_charinside(*(str + 1), "cspdiuxX%"))
		{
			return (1);
		}
		return (0);
	}
	return (0);
}

int	convert(const char *str, va_list pargs)
{
	int		count;

	count = 0;
	if (*str == 'c')
		count = to_char(va_arg(pargs, unsigned int));
	if (*str == 'p')
		count = to_pointer(va_arg(pargs, void *));
	if (*str == 's')
		count = to_string(va_arg(pargs, char *));
	if (*str == 'd')
		count = to_decimal(va_arg(pargs, int));
	if (*str == 'i')
		count = to_decimal(va_arg(pargs, int));
	if (*str == 'u')
		count = to_udecimal(va_arg(pargs, unsigned int));
	if (*str == 'x')
		count = to_lohexadecimal(va_arg(pargs, unsigned int));
	if (*str == 'X')
		count = to_uphexadecimal(va_arg(pargs, unsigned int));
	if (*str == '%')
		count = to_percent();
	return (count);
}

/*int	main(void)
{
	int count;

	char	*string = "%c%p%s%d%i%u%x%X%%";
	count = ft_printf(string, ']', NULL, "hello", 256, -894, 65536, 123, 456);
	printf("\n%c%p%s%d%i%u%x%X%%", ']', NULL, "hello", 256, -894, 65536, 123, 456); 

	printf("\n%d\n", count);
}
*/
