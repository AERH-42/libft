NAME = libft.a

SRCS = srcs/ft_putchar.c \
		srcs/ft_swap.c \
		srcs/ft_putstr.c \
		srcs/ft_strlen.c \
		srcs/ft_strcmp.c

OBJS = srcs/ft_putchar.o \
		srcs/ft_swap.o \
		srcs/ft_putstr.o \
		srcs/ft_strlen.o \
		srcs/ft_strcmp.o

CC = cc

CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I includes

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

srcs/ft_putchar.o: srcs/ft_putchar.c
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

srcs/ft_swap.o: srcs/ft_swap.c
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

srcs/ft_putstr.o: srcs/ft_putstr.c
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

srcs/ft_strlen.o: srcs/ft_strlen.c
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

srcs/ft_strcmp.o: srcs/ft_strcmp.c
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re