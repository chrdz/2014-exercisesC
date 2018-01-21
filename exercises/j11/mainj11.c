/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainj11.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 03:44:02 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/10 19:41:57 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"


int		main(void)
{
	t_list	*list;
	t_list	**begin_list;

	list = malloc(sizeof(t_list));
	//list = NULL;
	begin_list = malloc(sizeof(t_list));
	list = ft_create_elem("bonjour");
	ft_print_list(list);
//
	begin_list = &list;
/*
	ft_list_push_back(begin_list, "Max");
	ft_print_list(list);
*/
//
	ft_list_push_front(begin_list, "main");
	ft_print_list(list);
	return (0);
}
