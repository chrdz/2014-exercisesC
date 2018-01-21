# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/12 12:09:17 by crodrigu          #+#    #+#              #
#    Updated: 2014/09/12 14:30:30 by crodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
res=$(ifconfig | grep "inet " | cut -d " " -f 2)
if (test -z $$res)
then
	echo "Je suis perdu"
else
	ifconfig | grep "inet " | cut -d " " -f 2
fi