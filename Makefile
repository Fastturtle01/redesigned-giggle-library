CC =	gcc
CFLAG =	-Wall -Wextra -Werror
NAME =	libft.a
SRCS =	ft_atoi.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_strlen.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_isprint.c \
		  ft_strdup.c \
		  ft_strncmp.c \
		  ft_strlcpy.c \
		  ft_memset.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_strlcat.c \
		  ft_strnstr.c \
		  ft_memmove.c \
		  ft_bzero.c \
		  ft_memchr.c

OBJS =	$(SRCS:.c=.o)
RM =	rm -f

all: $(NAME)

.c.o:
	$(CC) $(CFLAG) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
