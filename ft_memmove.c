#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	info[n];
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char*)info)[i] = ((char*)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char*)dest)[i] = info[i];
		i++;
	}
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

//void	*ft_memmove(void *dest, const void *src, size_t n);

int		main(void)
{
	char	hello1[] = "helloasdasdasdas";
	char	good1[8] = "goodbye";
	int		i = 0;

	//char	plchldr1[] = "qwer";

	//char	dest2[] = "HELLO";
	//char	src2[] = "GOODBYE";

	while (i < 100)
	{
		printf("%c\n", hello1[i]);
		i++;
	}
	printf("%s\n", good1);
	//printf("%s\n", (char*)memmove(dest1, src1, 6));

	//printf("%s\n%s\n", (char*)ft_memmove(dest2, src2, 6), plchldr1);

	return (0);
}
*/