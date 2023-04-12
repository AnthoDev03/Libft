NAME = libft
SRCS =  ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c \
	ft_strlen.c  ft_strlcpy.c ft_memcpy.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_memchr.c \
	ft_memmove.c ft_atoi.c ft_strnstr.c ft_strlcat.c ft_strdup.c ft_calloc.c ft_bzero.c ft_memset.c \
	ft_strmapi.c ft_substr.c ft_strjoin.c
#SRCS_BONUS = 
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CC = clang
CFLAGS = -Wall -Wextra -Werror -std=c99
ARFLAGS = -rcs
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar $(ARFLAGS) $(NAME).a $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS) $(OBJS_BONUS)
	ar $(ARFLAGS) $(NAME).a $(OBJS) $(OBJS_BONUS)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(SRCS_BONUS)
	gcc -nostartfiles -shared -o $(NAME).so $(OBJS) $(OBJS_BONUS)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME).a $(NAME).so

re: fclean all

.PHONY: all, clean, fclean, re
