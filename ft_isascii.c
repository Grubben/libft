int	ft_isascii(char c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>

int     ft_isascii(char c);

int     main(void)
{
	//printf("%d__%d\n", ft_isdigit('2'), ft_isdigit('w'));
        //printf("%d__%d__%d\n", ft_isalnum('2'), ft_isalnum('w'), ft_isalnum('.'));
	printf("%d__%d\n", ft_isascii('2'), ft_isascii(128));
       	return (0);
}
*/