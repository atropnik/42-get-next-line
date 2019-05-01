# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atropnik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/01 00:35:00 by atropnik          #+#    #+#              #
#    Updated: 2019/05/01 05:28:32 by atropnik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line
FLAGS = -Wall -Werror -Wextra -I $(HEADER) -g
SRC = *.c
OBJ = $(SRC:.c=.o)
HEADER = get_next_line.h

$(NAME): $(OBJ)
	make -C libft/
	gcc $(FLAGS) $(OBJ) -o $(NAME) -L libft -lft

all: $(NAME)

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean $(NAME)
