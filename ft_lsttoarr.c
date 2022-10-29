#include "libft.h"

char    **ft_lsttoarr(t_list *lst)
{
    size_t  lstlen;
    size_t  i;
    char    **matrix;


    lstlen = ft_lstlen(lst);
    matrix = malloc((lstlen + 1) * sizeof(char *));
    if (!matrix)
        exit(0);
    i = 0;
    while (lst)
    {
        matrix[i] = (char *)(lst->content);
        i++;
        lst = lst->next;
    }
    matrix[i] = NULL;
    return (matrix);
}
