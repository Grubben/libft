/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:26:43 by amc               #+#    #+#             */
/*   Updated: 2022/10/18 14:59:31 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Presumes t_list:content is originally int type
*/
int	ft_lstmin(t_list *lst)
{
	int	min;

	if (!lst)
	{
		ft_printf("ERROR\n");
	}
	min = *(int *)(lst->content);
	while (lst->next != NULL)
	{
		lst = lst -> next;
		if (*(int *)(lst->content) < min)
			min = *(int *)(lst->content);
	}
	return (min);
}
