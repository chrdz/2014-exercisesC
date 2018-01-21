/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 11:43:45 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/14 21:46:10 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_list_push_back(t_list **begin_list, char data)
{
	t_list	*list;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		list = *begin_list;
		while (list->next)
			list = list->next;
		list->next = ft_create_elem(data);
	}
}
