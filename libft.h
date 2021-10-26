#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int		ft_isalpha(char c);

int		ft_isalnum(char c);

int		ft_isdigit(char c);

int		ft_isascii(char c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *b, int c, size_t len);

void    ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		ft_atoi(const char *str);

void	*ft_calloc(size_t count, size_t size);

char	*strdup(const char *s1);
