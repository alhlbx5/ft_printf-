# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 04:05:39 by aalhalab          #+#    #+#              #
#    Updated: 2024/01/21 16:32:56 by aalhalab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        =   libftprintf.a

CC          =   cc

CFLAGS		=   -Wall -Wextra -Werror

SRC	=	ft_printf.c ft_putnbr.c ft_printf_c.c ft_printf_d.c \
        ft_printf_p.c ft_printf_s.c ft_printf_x.c ft_putnbr_fd.c \
        ft_printf_x_upper.c ft_printf_u.c

OBJ		=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)

re: fclean all
