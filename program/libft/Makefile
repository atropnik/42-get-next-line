# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atropnik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/14 16:29:55 by atropnik          #+#    #+#              #
#    Updated: 2019/05/23 20:50:52 by atropnik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = includes/libft.h
FLAGS = -Wall -Wextra -Werror
OPTIONS = -c $(SRC) -I $(HEADER)
SRC = *.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTIONS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
