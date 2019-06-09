# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atropnik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/01 00:35:00 by atropnik          #+#    #+#              #
#    Updated: 2019/05/29 02:32:39 by atropnik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line
FLAGS = -Wall -Werror -Wextra -I $(HEADER) -g -fsanitize=address
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
LIBFT = libft -lft
HEADER = get_next_line.h

$(NAME): $(OBJ)
	make -C libft/
	gcc $(FLAGS) $(OBJ) -o $(NAME) -L $(LIBFT)

all: $(NAME)

debug:
	gcc -g get_next_line.c main.c -L $(LIBFT)

clean:
	@/bin/rm -rf $(OBJ)
	@make -C libft/ clean

fclean: clean
	@/bin/rm -rf $(NAME)
	@make -C libft/ fclean

dclean: fclean
	@/bin/rm -rf a.out*

re: fclean all
