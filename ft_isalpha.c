int	ft_isalpha(char c)
{
	if ( c >= 65 && c <= 90)
		return (c);
	if ( c >= 97 && c <= 122)
		return (c);
	return (0);
}

/*
#include <stdio.h>

int	ft_isalpha(char c);

int     main(void)
{
        printf("%d\n", ft_isalpha('1'));
        return (0);
}
*/