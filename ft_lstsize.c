/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:16:47 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/09 11:16:56 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	n;

	if (!lst)
		return (0);
	n = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		n++;
	}
	return (n);
}

/*
int main()
{
	t_list	*head;
	t_list	el;

	head = NULL;

	el.content = (void *)"good";
	el.next = NULL;

	printf("%d\n", ft_lstsize(head)); // == 0

	head = ft_lstnew((void *)"hello");
	printf("%d\n", ft_lstsize(head)); // == 1

	ft_lstadd_front(&head, &el);
	printf("%d\n", ft_lstsize(head)); // == 2


	return 0;
}
*/