/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 20:24:44 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/07 20:29:13 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mes_fonctions.h"

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

int		ft_check_erreur(char **argv)
{
	int		l;
	int		c;

	l = 1;
	while (l < 10)
	{
		c = 0;
		while (c < 9)
		{
			if (!((argv[l][c] >= '1' && argv[l][c] <= '9') ||
				argv[l][c] == '.'))
				return (0);
			c++;
		}
		if (argv[l][9])
			return (0);
		l++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	char	**tab;

	if (ft_check_erreur(argv) && argc == 10)
	{
		tab = ft_strdup(argv);
		ft_solution(0, tab);
		if (ft_solution(0, tab))
		{
			ft_print(tab);
		}
	}
	else
	{
		ft_putstr("Erreur");
		ft_putchar('\n');
	}
	return (0);
}
