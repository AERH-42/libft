#output library name
NAME = libft.a

#list of mandatory c files
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	  ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
	  ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	  ft_substr.c ft_tolower.c ft_toupper.c ft_itoa.c ft_putchar_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	  ft_striteri.c ft_strjoin.c ft_strmapi.c ft_strtrim.c

#list of bonus c files
BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
		ft_lstiter_bonus.c ft_lstmap_bonus.c

#convert mandatory .c to .o
OBJS = $(SRCS:.c=.o)
#convert bonus .c to .o
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

#compiler
CC = cc
#compilation flags
CFLAGS = -Wall -Wextra -Werror
#looks in current directory for header files
INCLUDES = -I includes

#default target, builds mandatory only
all: $(NAME)

#main library rule. compiles mandatory objects and create archives
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

#bonus rule. compiles mandatory and bonus objects and create archives
bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

#compiles .c to .o
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

#removes .o files
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

#removes .o files and library
fclean: clean
	rm -f $(NAME)

#full rebuild
re: fclean all

#not treated as files to run
.PHONY: all bonus clean fclean re