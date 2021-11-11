#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*here;
	t_list	*after;

	if (*lst != NULL && lst != NULL)
	{
		here = *lst;

		while (here->next != NULL)
		{
			after = here->next;
			ft_lstdelone(here, del);
			free(here);
			here = after;
		}
		ft_lstdelone(here, del);
		free(here);
		*lst = NULL;
	}
}

int	main(void)
{
	t_list *l = ft_lstnew(ft_strdup("nyancat"));

	l->next = ft_lstnew(ft_strdup("#TEST#"));
	ft_lstclear(&l, free);
	write(2, "", 1);
}
