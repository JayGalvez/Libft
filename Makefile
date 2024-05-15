NAME = libft.a
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -rf
MY_SOURCES = ft_isalpha.c \
			ft_isnum.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_isdigit.c \
			ft_memset.c \
			ft_strlen.c \
			ft_bzero.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strrchr.c \
			ft_strnchr.c \
			ft_atoi.c \
			ft_strncmp.c \
			ft_memchr.c 
			ft_srtnstr.c \
			ft_malloc.c \
			ft_calloc.c \
			ft_strdup.c \


OBJS = $(MY_SOURCES:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@ar crs $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re