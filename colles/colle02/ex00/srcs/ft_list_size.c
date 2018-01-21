/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 22:17:31 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/14 23:41:18 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;

	i = 0;
	if (begin_list == 0)
		return (0);
	else
	{
		while (begin_list)
		{
			begin_list = begin_list->next;
			i++;
		}
	}
	return (i);
}
#include <stdio.h>

int		main(void)
{
	t_list	*list;

	list = NULL;
	printf("%d", ft_list_size(list));
	return (0);
}
