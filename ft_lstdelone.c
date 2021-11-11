/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:12:06 by amc               #+#    #+#             */
/*   Updated: 2021/11/11 17:19:22 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstdelone(ft_lstnew("Hello"), free);*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	// free(lst);
}
