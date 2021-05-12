# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asalah <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/07 20:56:46 by asalah            #+#    #+#              #
#    Updated: 2019/03/09 13:36:28 by asalah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

PATH_INC = ./libft/includes/

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HEAD = fdf.h

SRC = main.c \
	  t.c \
	  cordiso.c \
	  cordpar.c \
	  line.c \
	  read.c \
	  events.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEAD)
	make -C libft/
	$(CC) $(CFLAGS) -I $(PATH_INC) -c $(SRC)
	$(CC) -o $(NAME) $(OBJ) -lm -L libft/ -lft -lmlx -framework OpenGL -framework AppKit
	/bin/rm -f *.o

clean:
	make -C libft/ clean
	/bin/rm -f $(OBJ)
	fclean: clean
	make -C libft/ fclean
	/bin/rm -f $(NAME)
	re: fclean all

fclean: clean
	make -C libft/ fclean
	/bin/rm -f $(NAME)

re: fclean all
