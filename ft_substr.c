/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amc <amc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:38:49 by amaria-d          #+#    #+#             */
/*   Updated: 2021/12/28 16:10:46 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
len does not include the '\0'
    even though it is added to the end
        of the string
in other words:
    
    string[len] == '\0'

Things to add:
	long long	min;
	min = ft_smin((long long)start, (long long)len);
	ptr = ft_calloc(min + 1, sizeof(char));
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		min;
	size_t		i;
	char		*ptr;

	if (!s)
		return (NULL);
	min = len;
	if (ft_strlen(s) < len)
		min = ft_strlen(s);
	if (start >= ft_strlen(s))
		ptr = malloc(1);
	else
		ptr = malloc((min + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < min)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
int	main(void)
{
	char *str = "tripouille";
	size_t size = 42000;

	printf("%s\n", ft_substr(str, 0, size));
	//printf("%s\n", substr(str, 5, size));
	
	//printf("%zu\n", ft_strlen(ft_substr(str, 5, size)));
	//printf("%zu\n", ft_strlen(substr(str, 5, size)));
	

	return (0);
}
*/
