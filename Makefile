NAME		= libft.a

CC 			= gcc
CFLAGS		= -g3 -Wall -Wextra -Werror -D BUFFER_SIZE=20

RM			= rm -rf

SRCS		= $(wildcard *.c)
# SRCS		= conversions1.c conversions2.c ft_atoi.c ft_bzero.c ft_calloc.c ft_charinside.c\
# 				ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c\
# 				ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c\
# 				ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstprint.c ft_lstsize.c ft_memchr.c\
# 				ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_printf.c ft_putchar_fd.c\
# 				ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_reverse.c ft_reversen.\
# 				ft_smax.c ft_smin.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c\
# 				ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strnchr.c ft_strncmp.c\
# 				ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c\
# 				simplePnbr.c utils.c ft_lstget_item.c ft_lstmax.c

OBJS		= $(SRCS:.c=.o)

$(NAME)		: $(OBJS)
				ar rcs $(NAME) $(OBJS)
				ranlib $(NAME)

all			: $(NAME)

clean		:
				$(RM) $(OBJS)

fclean		: clean
				$(RM) *.out* $(NAME) *.gch
				$(RM) *.a

re			: fclean $(NAME)


.PHONY		: all bonus clean fclean re
