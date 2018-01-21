#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/11 10:54:45 by crodrigu          #+#    #+#              #
#    Updated: 2014/09/11 18:27:35 by crodrigu         ###   ########.fr        #
#                                                                              #
#******************************************************************************#


NAME = ft_display_file

SRCS = ft_display_file.c

FLAGS = -Wall -Wextra -Werror

HDR = ./includes

all:
	gcc -o $(NAME) $(FLAGS) $(SRCS) -I $(HDR)

clean: 
	/bin/rm -f ./$(NAME)

fclean: clean
	ls