#include "libft.h"

/* reverse:  reverse string s in place */
void ft_reversen(char *s, unsigned int n)
{
	int i, j;
    char c;
	
	if (n < 2)
		return ;
	j = n - 1;
	if (n > ft_strlen(s))
		j = ft_strlen(s) - 1;
	i = 0;
	while (i < j)
	{
        c = s[i];
        s[i] = s[j];
        s[j] = c;
		i++;
		j--;
	}
}  

/*
int	main(void)
{
	char	string[] = "12345";

	ft_reversen(string, 1);
	printf("%s\n", string);
}
*/