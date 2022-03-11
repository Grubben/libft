/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amc <amc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:13:09 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/13 10:43:48 by amc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *head)
{	
	if (head)
	{
		printf("%s\n", (char *)(head->content));
		while (head->next != NULL)
		{
			head = head->next;
			printf("%s\n", (char *)(head->content));
		}
	}
}
