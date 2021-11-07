#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = ft_calloc(1, sizeof(t_list));
	head->content = content;
	head->next = NULL;
	return (head);
}

/*
int	main(void)
{
	printf("%lu\n", sizeof(t_list));

}
*/
