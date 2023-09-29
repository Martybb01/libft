NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
ARCL = ar -rcs
RM = rm -f

SRCS := $(wildcard ft_*.c)
OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(ARCL) $(NAME) $(OBJS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
