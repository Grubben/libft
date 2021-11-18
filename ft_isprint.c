/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:40:48 by amaria-d          #+#    #+#             */
/*   Updated: 2021/10/24 11:54:45 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (040 <= c && c <= 0176);
}

/*
int main(void)
{
	char	letter1 = 0176;
	printf("%d __ %d\n", isprint(letter1), ft_isprint(letter1));
	return 0;
}
*/