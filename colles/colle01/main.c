/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bibli.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/06 18:56:00 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/07 17:51:20 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mes_fonctions.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

char	**ft_strdup(char **src)
{
	int		c;
	int		l;
	char	**tab;

	l = 0;
	tab = (char **)malloc(sizeof(char *) * 9);
	while (l < 9)
	{
		*(tab + l) = (char *)malloc(sizeof(char) * 9);
		l++;
	}
	l = 0;
	while (l < 9)
	{
		c = 0;
		while (c < 9)
		{
			tab[l][c] = src[l + 1][c];
			c++;
		}
		l++;
	}
	return (tab);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(48 + n);
}

void	ft_print(char **tab)
{
	int		l;
	int		c;

	l = 0;
	while (l < 9)
	{
		c = 0;
		while (c < 9)
		{
			ft_putchar(tab[l][c]);
			ft_putchar(' ');
			c++;
		}
		l++;
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	char	**tab;
	int		*sol;

	sol = 0;
	argc = argc;
	tab = ft_strdup(argv);
	ft_nb_sol(0, tab, sol);
	ft_putnbr(*sol);
	ft_solution(0, tab);
	if (ft_solution(0, tab))
	{
		ft_print(tab);
	}
	else
	{
		ft_putstr("Erreur");
		ft_putchar('\n');
	}
	return (0);
}
