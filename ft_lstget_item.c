/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget_item.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 15:56:37 by amc               #+#    #+#             */
/*   Updated: 2022/10/18 15:11:30 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Acts like python array[n]
 */
t_list	*ft_lstget_item(t_list *lst, ssize_t index)
{
	int		size;
	int		i;

	if (index == 0)
		return (lst);
	if (index > 0)
	{
		while (index-- > 0)
			lst = lst -> next;
		return (lst);
	}
	if (index == -1)
		return (ft_lstlast(lst));
	size = ft_lstsize(lst);
	if (-index > size)
		return (NULL);
	i = 0;
	while (i < size + index)
	{
		lst = lst -> next;
		i++;
	}
	return (lst);
}
