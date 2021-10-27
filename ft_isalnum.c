/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:29:23 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/27 19:30:02 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char c)
{
	if (c >= 65 && c <= 90)
		return (c);
	if (c >= 97 && c <= 122)
		return (c);
	return (0);
}

static int	ft_isdigit(char c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}

int	ft_isalnum(char c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
#include <stdio.h>

int     ft_isalnum(char c);

int     main(void)
{
	//printf("%d__%d\n", ft_isdigit('2'), ft_isdigit('w'));
    printf("%d__%d__%d\n", ft_isalnum('2'), ft_isalnum('w'), ft_isalnum('.'));
    return (0);
}
*/