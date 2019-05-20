# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atropnik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/01 00:35:00 by atropnik          #+#    #+#              #
#    Updated: 2019/05/19 02:42:48 by atropnik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line
FLAGS = -Wall -Werror -Wextra -I $(HEADER) #-g -fsanitize=address
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
HEADER = get_next_line.h

$(NAME): $(OBJ)
	make -C libft/
	gcc $(FLAGS) $(OBJ) -o $(NAME) -L libft -lft

all: $(NAME)

debug:
	gcc -g get_next_line.c -L libft -lft

clean:
	/bin/rm -rf $(OBJ)
	/bin/rm -rf libft/*.o

fclean: clean
	/bin/rm -rf $(NAME)

dclean: fclean
	/bin/rm -rf a.out*

re: fclean all
