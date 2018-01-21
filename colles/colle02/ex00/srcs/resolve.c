/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 20:37:10 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/14 23:28:50 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdio.h>
int		ft_comp_one_colle(char *tab, char *(*f)(int, int))
{
	char	*colle;
	int		x;
	int		y;

	x = ft_length_col(tab);
	y = ft_length_line(tab);
	colle = f(x, y);
	if (ft_strcmp(colle, tab) == 0)
		return (1);
	return (0);
}

void	ft_print_res_colle(int num, int x, int y)
{
	ft_putstr("[colle-0");
	ft_putnbr(num);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}

void	ft_comp_colle(char *tab, int x, int y)
{
	int		tabi[5];
	int		i;
	int		cpt;

	cpt = 0;
	tabi[0] = ft_comp_one_colle(tab, &ft_colle_zero);
	tabi[1] = ft_comp_one_colle(tab, &ft_colle_one);
	tabi[2] = ft_comp_one_colle(tab, &ft_colle_two);
	tabi[3] = ft_comp_one_colle(tab, &ft_colle_three);
	tabi[4] = ft_comp_one_colle(tab, &ft_colle_four);
	i = 0;
	printf("%d %d\n", x, y);
	while (i < 5)
	{
		if (tabi[i] || (x == 0 && y == 0))
		{
			if (cpt++)
				ft_putstr(" || ");
			ft_print_res_colle(i, x, y);
		}
		i++;
	}
	if (cpt == 0)
		ft_putstr("aucune");
}
