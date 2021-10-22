#include <unistd.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	while (n != 0)
	{
		((char*)dest)[n-1] = ((char*)src)[n-1];
		n--;
	}

	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);

int		main(void)
{
	char str[] = "goodbye";

	printf("%s\n", (char*)ft_memcpy(str, "hello", 1));

	return (0);
}
*/