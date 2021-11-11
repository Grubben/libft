#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*nel;
	
	new = NULL;
	while (lst != NULL)
	{
		nel = ft_lstnew(f(lst->content));
		if (!nel)
		{
			ft_lstclear(&new, del);
			return (NULL);	
		}
		ft_lstadd_back(&new, nel);
		lst = lst->next;
	}
	return (new);
}
