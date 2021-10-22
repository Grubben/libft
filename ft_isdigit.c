int	ft_isdigit(char c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}
/*
#include <stdio.h>

int	ft_isdigit(char c);

int	main(void)
{
	printf("%d__%d\n", ft_isdigit('2'), ft_isdigit('w'));
	return (0);
}
*/