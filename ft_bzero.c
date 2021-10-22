#include <unistd.h>

void    ft_bzero(void *s, size_t n)
{
    while (n != 0)
    {
        ((char*) s)[n-1] = 0;
        n--;
    }
}

/*
#include <stdio.h>

void    ft_bzero(void *s, size_t n);

int     main(void)
{
    char    str1[] = "";
    char    str2[] = "goodbye";

    ft_bzero(str1, 0);
    ft_bzero(str2, 1);

    printf("%s\n", str1);
    printf("%s\n",str2);
    return (0);
}

*/