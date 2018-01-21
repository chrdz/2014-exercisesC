/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 20:41:43 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/14 23:33:22 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
int		main(void)
{
	char	buf[1];
	t_list	*list;
	char	*tab;
	int		i;
	t_list	*tmp;

	list = NULL;
	while (read(0, buf, 1))
		ft_list_push_back(&list, buf[0]);
	tab = (char *)malloc(sizeof(char) * (ft_list_size(list) + 1));
	printf("%d\n", ft_list_size(list));
	tmp = list;
	i = 0;
	while (list)
	{
		tab[i] = list->data;
		i++;
		list = list->next;
	}
	tab[i] = '\0';
	ft_free_list(tmp);
	ft_comp_colle(tab, ft_length_col(tab), ft_length_line(tab));
	ft_putchar('\n');
	return (0);
}
