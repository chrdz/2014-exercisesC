/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00001.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 18:41:18 by ldite             #+#    #+#             */
/*   Updated: 2014/09/14 23:07:36 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
char	ft_print_char_one(int x, int y, int c, int l)
{
	if ((c == 1 && l == 1) || (c == x && l == y && x > 1 && y > 1))
		return ('/');
	else if ((c == x && l == 1) || (c == 1 && l == y))
		return ('\\');
	else if (l == 1 || c == 1 || c == x || l == y)
		return ('*');
	else
		return (' ');
}

char	*ft_run_one(char *tab, int x, int y)
{
	int c;
	int l;
	int i;

	i = 0;
	l = 1;
	c = 1;
	while (l <= y)
	{
		while (c <= x)
		{
			tab[i] = ft_print_char_one(x, y, c, l);
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

char	*ft_colle_one(int x, int y)
{
	char *tab;

	tab = (char*)malloc(sizeof(char) * (x * y + 1));
	if (x <= 0 || y <= 0)
	{
		tab[0] = '\0';
		return (tab);
	}
	return (ft_run_one(tab, x, y));
}
