/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:39:23 by amaria-d          #+#    #+#             */
/*   Updated: 2022/10/18 15:07:02 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
// # include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <stdarg.h>

int		ft_isalpha(int c);

int		ft_isalnum(int c);

int		ft_isdigit(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int		ft_atoi(const char *str);

long	ft_atol(const char *str);

void	*ft_calloc(size_t count, size_t size);

char	*ft_strdup(const char *s1);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

/* BONUS */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);

int		ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* MINE */

/*
 * Returns length of given t_list
 */
size_t	ft_lstlen(t_list *stack);

/**
 * Acts like python's index:
 * [2,3,4].index(3) ->> 1
 * Returns -1 if not present/ERROR
 * Presumes that t_list.content points to an int
 */
size_t	ft_lstindex(t_list *stack, int value);

/**
 * Acts like python array[n]
 */
t_list	*ft_lstget_item(t_list *lst, ssize_t index);

/*
 * ft_lstget_item but presumes
 * t_list::content is an (int *)
 */
int		ft_pslstget_it(t_list *lst, ssize_t index);

/*
Presumes t_list:content is originally int type
*/
int		ft_lstmin(t_list *lst);
int		ft_lstmax(t_list *lst);

/*
Presumes t_list:content is originally (int *) type
*/
void	ft_lstprint(t_list *head);

t_list	*ft_lstcpy(t_list *lst);

int		ft_charinside(char c, const char *s);

char	*ft_strnchr(char *s, int c);

void	ft_reverse(char *s);

void	ft_reversen(char *s, unsigned int n);

int		ft_smin(long long a, long long b);

int		ft_smax(long long a, long long b);

/* FT_PRINTF */
int		ft_printf(const char *format, ...);

int		to_char(char c);

int		to_pointer(void *ptr);

int		to_string(char *ptr);

int		to_decimal(int n);

int		to_udecimal(unsigned int n);

int		to_lohexadecimal(unsigned int n);

int		to_uphexadecimal(unsigned int n);

int		to_percent(void);

int		base_check(char *base);

size_t	num_len(ssize_t nbr);

int		ft_putnbr_base(ssize_t nbr, char *base);

int		ft_putunbr_base(size_t nbr, char *base);

size_t	simple_putunbr_base(size_t nbr, char *base);

#endif
