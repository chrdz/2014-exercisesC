#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/09 09:19:17 by crodrigu          #+#    #+#              #
#    Updated: 2014/09/09 17:18:06 by crodrigu         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

_SRCSFILES = ft_putchar.c \
	ft_putstr.c \
	ft_strcmp.c \
	ft_strlen.c \
	ft_swap.c

SRCS = $(patsubst %, srcs/%, $(_SRCSFILES))

OBJ = $(_SRCSFILES:.c=.o)

FLAGS = -Wall -Wextra -Werror

HDR = ./includes

all:
	gcc $(FLAGS) -c $(SRCS) -I$(HDR)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all