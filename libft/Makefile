# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asalah <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/08 11:51:38 by asalah            #+#    #+#              #
#    Updated: 2018/10/10 16:27:33 by asalah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
HEADER = libft.h
OBJECTS = *.o

all : $(NAME)

$(NAME) :
		gcc -Wall -Wextra -Werror -I=./$(HEADR) -c $(SRC)
		ar rc $(NAME) $(OBJECTS)

clean :
			/bin/rm -f $(OBJECTS)

fclean: clean
			/bin/rm -f $(NAME)

re: fclean all
