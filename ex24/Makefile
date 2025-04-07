NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
INCS = includes
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -I $(INCS) -c $(SRCS)	

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all