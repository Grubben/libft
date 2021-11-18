/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:31:07 by amaria-d          #+#    #+#             */
/*   Updated: 2021/11/09 21:11:20 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
run throguh haystack looking for first letter of needle
if found strcmp the two for the lenght of needle
if result is 0 means they are the same there 
and that first letter is indeed succesful
if not continue until final '\0'
*/

/*
if (len < ft_strlen(needle))
	return (NULL);
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] != '\0' && i <= len - ft_strlen(needle))
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(haystack + i, needle, ft_strlen(needle)) == 0)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
    char	haystack[30] = "aaabcabcd";
    char	needle[10] = "abc";
    size_t	SIZE = 0;

    printf("%s\n", strnstr(haystack, needle, SIZE));
    printf("%s\n", ft_strnstr(haystack, needle, SIZE));
	
    //printf("%s\n", strnstr("aaabcabcd", "aaabc", 5));
    //printf("%s\n", ft_strnstr("aaabcabcd", "aaabc", 5));
}
*/
