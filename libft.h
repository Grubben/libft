#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void    ft_bzero(void *s, size_t n);

int		ft_isalnum(char c);

int		ft_isalpha(char c);

int		ft_isascii(char c);

int		ft_isdigit(char c);

size_t	ft_strlen(const char *s);

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memset(void *b, int c, size_t len);

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);