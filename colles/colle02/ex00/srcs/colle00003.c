/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00003.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 18:44:09 by ldite             #+#    #+#             */
/*   Updated: 2014/09/14 23:08:14 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
char	ft_print_char_three(int x, int y, int c, int l)
{
	if ((c == 1 && l == 1) || (c == 1 && l == y))
		return ('A');
	else if (c > 1 && c < x && l == 1)
		return ('B');
	else if ((c == 1 && l > 1 && l < y) || (c == x && l > 1 && l < y))
		return ('B');
	else if (c > 1 && c < x && l == y)
		return ('B');
	else if ((c == x && l == 1) || (c == x && l == y))
		return ('C');
	else
		return (' ');
}

char	*ft_run_three(char *tab, int x, int y)
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
			tab[i] = ft_print_char_three(x, y, c, l);
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

char	*ft_colle_three(int x, int y)
{
	char *tab;

	tab = (char*)malloc(sizeof(char) * (x * y + 1));
	if (x <= 0 || y <= 0)
	{
		tab[0] = '\0';
		return (tab);
	}
	return (ft_run_three(tab, x, y));
}
