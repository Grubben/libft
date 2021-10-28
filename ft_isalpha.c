/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:30:13 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/28 15:10:44 by amaria-d         ###   ########.fr       */
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

/*
#include <stdio.h>

int	ft_isalpha(char c);

int     main(void)
{
        printf("%d\n", ft_isalpha('1'));
        return (0);
}
*/