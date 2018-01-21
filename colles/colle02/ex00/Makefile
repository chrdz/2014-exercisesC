# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcheloud <vcheloud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/09 16:50:10 by vcheloud          #+#    #+#              #
#    Updated: 2014/09/14 23:10:08 by crodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADERS = ./includes/
SRC_DIR = srcs/
FLAGS = -Wall -Wextra -Werror
NAME = colle-2
FILES = colle00000 colle00001 colle00002 colle00003 colle00004 ft_create_elem \
	ft_list_push_back ft_list_size ft_strcmp main resolve tool tools_tab
SRCS = $(patsubst %, $(SRC_DIR)%.c, $(FILES))
OBJS = $(patsubst %, %.o, $(FILES))

.PHONY: all
all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I$(HEADERS) -c $(SRCS)
	gcc $(FLAGS) -o $(NAME) $(OBJS)

.PHONY: clean
clean:
	/bin/rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	/bin/rm -f $(NAME)

.PHONY: re
re: fclean all
