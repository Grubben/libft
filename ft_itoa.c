#include "libft.h"
#include <stdlib.h>

/*
	1) make 12 places: the minus, each digit and the '\0'

*/

char	*ft_itoa(int n)
{
	char			*digit;
	signed char		sign;
	unsigned int	new;
	unsigned int	i;

	sign = 1;
	if (n < 0)
		sign = -1;
	new = n * sign;
	digit = ft_calloc(12, sizeof(signed char));
	i = 0;
	if (new == 0)
		digit[i++] = 0 + '0';
	while (new != 0)
	{
		digit[i] = new % 10 + '0';
		new = new / 10;
		i++;
	}
	if (sign < 0)
		digit[i] = '-';
	ft_reversen(digit, i + 1);
	return (digit);
}
/*
int	main(void)
{

	printf("%zu\n", ft_strlen(ft_itoa(-2147483648)));

	return (0);
}
*/