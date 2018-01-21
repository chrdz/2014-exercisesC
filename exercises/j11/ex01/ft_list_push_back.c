/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 11:43:45 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/10 18:55:06 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list;

	list = NULL;
	if (*begin_list == NULL)
		list = ft_create_elem(data);
	else
	{
		list = *begin_list;
		while (list->next)
			list = list->next;
		list->next = ft_create_elem(data);
	}
}
