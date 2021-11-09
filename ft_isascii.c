/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:31:07 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/09 20:54:35 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>

int     ft_isascii(char c);

int     main(void)
{
	//printf("%d__%d\n", ft_isdigit('2'), ft_isdigit('w'));
//printf("%d__%d__%d\n", ft_isalnum('2'), ft_isalnum('w'), ft_isalnum('.'));
	printf("%d__%d\n", ft_isascii('2'), ft_isascii(128));
       	return (0);
}
*/