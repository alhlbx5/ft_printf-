NAME = libftprintf.a

SRCS =  main.c ft_printf_d.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)


