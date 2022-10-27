/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:00:24 by amaria-d          #+#    #+#             */
/*   Updated: 2022/10/18 15:01:17 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Acts like python's index:
 * [2,3,4].index(3) ->> 1
 * Returns -1 if not present/ERROR
 * Presumes that t_list.content points to an int
 */
size_t	ft_lstindex(t_list *stack, int value)
{
	size_t	i;
	int		tmpint;

	i = 0;
	while (stack != NULL)
	{
		tmpint = *(int *)(stack->content);
		if (tmpint == value)
			return (i);
		i++;
		stack = stack->next;
	}
	return (-1);
}

/*
int	main(void)
{
	t_list	*stack1;
	t_list	el;
	int		n[4] = {-12,3,-1,8};

	el.content = (void *)(&n);
	el.next = NULL;

	
	stack1 = &el;

	ft_lstadd_back(&stack1, ft_lstnew((void *)&(n[1])));

	ft_lstadd_back(&stack1, ft_lstnew((void *)&(n[2])));

	ft_lstadd_back(&stack1, ft_lstnew((void *)&(n[3])));

	ft_printf("%d\n", ft_lstindex(stack1, 3));
}
*/
