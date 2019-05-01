# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atropnik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/14 16:29:55 by atropnik          #+#    #+#              #
#    Updated: 2019/04/12 12:42:48 by atropnik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
GNAME = get_next_line
GSRC = get_next_line.c
HEADER = includes/libft.h
HEADER2 =  get_next_line.h
FLAGS = -Wall -Wextra -Werror
OPTIONS = -c $(SRC) -I $(HEADER)
SRC = *.c
OBJ = *.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTIONS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

t: $(NAME)
	gcc -o $(GNAME) -I $(HEADER2) $(GSRC)

clean:
	/bin/rm -f ../$(OBJ)

fclean: clean
	/bin/rm -f ../$(NAME)

re: fclean all
