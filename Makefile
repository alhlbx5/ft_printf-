# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 04:05:39 by aalhalab          #+#    #+#              #
#    Updated: 2023/12/08 02:00:29 by aalhalab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        =   libftprintf.a
CC          =   cc
SRC         =   c.c q.c
OBJ         =   $(SRC:%.c=%.o)
LIBFT		=   libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@ar -rc $@ $<

$(LIBFT):
	@make -C ./libft
	@mv ./libft/$@ ./

clean:
	@rm -rf $(OBJ)
	@make -C ./libft fclean
	@rm -rf $(LIBFT)
	@echo "cleaning"

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re