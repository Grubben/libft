typedef __typeof__(sizeof(int)) size_t;

void	*ft_memset(void *b, int c, size_t len)
{
    unsigned int	i;
    
    i = 0;
    while (i < len)
    {
        ((char*) b)[i] = (unsigned char)c;
        ++i;
    }
	return (b);
}
/*
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int     main(void)
{
    char    str[] = "";
	printf("%s\n", (char *)ft_memset(str, ';', 3));
    return (0);
}
*/