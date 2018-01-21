/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 20:24:44 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/07 20:26:58 by crodrigu         ###   ########.fr       */
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
