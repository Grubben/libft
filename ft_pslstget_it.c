/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pslstget_it.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:03:24 by amc               #+#    #+#             */
/*   Updated: 2022/10/18 15:00:00 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstget_item but presumes
 * t_list::content is an (int *)
 */
int	ft_pslstget_it(t_list *lst, ssize_t index)
{
	return (
		*(int *)(ft_lstget_item(lst, index)->content)
	);
}
