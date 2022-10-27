/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:02:06 by amaria-d          #+#    #+#             */
/*   Updated: 2022/10/18 15:02:24 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Presumes t_list:content is originally int type
*/
int	ft_lstmax(t_list *lst)
{
	int	max;

	if (!lst)
	{
		ft_printf("ERROR");
	}
	max = *(int *)(lst->content);
	while (lst->next != NULL)
	{
		lst = lst -> next;
		if (*(int *)(lst->content) > max)
			max = *(int *)(lst->content);
	}
	return (max);
}

/*
int	main(void)
{
	t_list	*stack1;
	t_list	*stack2;
	t_list	el;
	int		counter;
	int		n[4] = {-12,3,-1,8};

	counter = 0;
	stack1 = NULL;
	stack2 = NULL;

	el.content = (void *)(&n);
	el.next = NULL;

	
	stack1 = &el;

	ft_lstadd_back(&stack1, ft_lstnew((void *)&(n[1])));

	ft_lstadd_back(&stack1, ft_lstnew((void *)&(n[2])));

	ft_lstadd_back(&stack1, ft_lstnew((void *)&(n[3])));

	ft_printf("%d\n", ft_lstmax(stack1));
}
*/