/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00000.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 18:42:34 by ldite             #+#    #+#             */
/*   Updated: 2014/09/14 23:07:09 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

char	ft_print_char_zero(int x, int y, int c, int l)
{
	if ((c == 1 && l == 1) || (c == x && l == y) ||
		(c == x && l == 1) || (c == 1 && l == y))
		return ('o');
	else if (l == 1 || l == y)
		return ('-');
	else if ((l > 1 && l < y && c == 1) || (l > 1 && l < y && c == x))
		return ('|');
	else
		return (' ');
}

char	*ft_run_zero(char *tab, int x, int y)
{
	int	c;
	int	l;
	int	i;

	i = 0;
	l = 1;
	c = 1;
	while (l <= y)
	{
		while (c <= x)
		{
			tab[i] = ft_print_char_zero(x, y, c, l);
			i++;
			c++;
		}
		c = 1;
		l++;
		tab[i] = '\n';
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_colle_zero(int x, int y)
{
	char	*tab;

	tab = (char*)malloc(sizeof(char) * (x * y + y + 1));
	if (x <= 0 || y <= 0)
	{
		tab[0] = '\0';
		return (tab);
	}
	return (ft_run_zero(tab, x, y));
}
