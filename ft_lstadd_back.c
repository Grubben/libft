/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:29:20 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/11 17:15:48 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
		{
			if (new)
			{
				ft_lstlast(*lst)->next = new;
				return ;
			}
		}	
		*lst = new;
	}
}

/*
int main()
{
	t_list	*head;
	t_list	el[2];

	head = NULL;

	el[0].content = (void *)"good";
	el[0].next = el[1];

	el[1].content = (void *)"bye";
	el[1].next

	// printf("%d\n", ft_lstsize(head)); // == 0

	head = ft_lstnew((void *)"hello");
	// printf("%d\n", ft_lstsize(head)); // == 1

	ft_lstadd_back(&head, &(el[0]));
	// printf("%d\n", ft_lstsize(head)); // == 2

	ft_lstprint(head);

	return 0;
}
*/
