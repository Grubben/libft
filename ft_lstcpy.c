/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:14:46 by amaria-d          #+#    #+#             */
/*   Updated: 2022/10/18 15:08:06 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Makes a copy of the given list but
 * the content itself is still the same
 * since t_lst::content is just a pointer
 * Might be more efficient to use ft_lstadd_front
 */
t_list	*ft_lstcpy(t_list *lst)
{
	t_list	*new;

	if (!lst)
		return (NULL);
	new = ft_lstnew(lst->content);
	while (lst->next != NULL)
	{
		lst = lst->next;
		ft_lstadd_back(&new, ft_lstnew(lst->content));
	}
	return (new);
}

/*
int main(void)
{
	t_list  *a1;
	t_list  *b1;

	int num[3] = {11, 22, 33};
	a1 = ft_lstnew(&num[0]);
	ft_lstadd_back(&a1, ft_lstnew(&num[1]));
	ft_lstadd_back(&a1, ft_lstnew(&num[2]));
	ft_lstprint(a1);
	
	ft_printf("\n");
	
	b1 = ft_lstcpy(a1);
	ft_lstprint(b1);

}
*/
