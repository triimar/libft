NAME = libft.a
SOURCE = ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_memmove.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_toupper.c\
ft_tolower.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_atoi.c\
ft_calloc.c\
ft_strdup.c

OBJECT = $(SOURCE:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECT)
	ar -rv $(NAME) $(OBJECT)

%.o: %.c 
	$(CC) -c $(CFLAGS) $<

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
