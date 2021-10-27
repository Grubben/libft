#SRCS		= ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
				ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
				ft_putendl_fd.c ft_putnbr_fd.c ft_tolower.c ft_toupper.c \
				\
				ft_atoi.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
				ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strncmp.c ft_strchr.c ft_strim.c ft_substr.c \
				\
				ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
				ft_lstnew.c ft_lstsize.c

SRCS		= $(wildcard *.c)

OBJS		= $(SRCS:.c=.o)


CC 			= gcc
RM			= rm -rf
dbCFLAGS	= -Wall -Wextra -Werror -g -fsanitize=address
CFLAGS		= -Wall -Wextra -Werror

NAME		= libft.a


all			: $(NAME)


$(NAME)		: $(OBJS)
				ar rs $(NAME) $(OBJS)

# db			: 	
# 				$(CC) $(dbCFLAGS) $(SRCS)


# run			:
# 				$(CC) $(CFLAGS) $(SRCS)


.PHONY		: run all clean fclean re



clean		:
				$(RM) $(OBJS)

fclean		: clean
				$(RM) $(NAME)

re			: clean fclean
				$(RM) 



# %.out		: %.c
# 				$(CC) $(CFLAGS) $< -o $@
