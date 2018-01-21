/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainj10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 13:52:34 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/09 21:21:28 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_abs.h"

int		*ft_map(int *tab, int length, int(*f)(int));

void	ft_foreach(int *tab, int length, void(*f)(int));

int     ft_any(char **tab, int(*f)(char *));

int		ft_count_if(char **tab,int(*f)(char*));

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if (n >= 10)
    {
        ft_putnbr(n /10);
        ft_putnbr(n % 10);
    }
    else
		ft_putchar(48 + n);
}

void    ft_putnbr_neg(int n, int signe)
{
	if (n < 0)
	{
		n = ABS(n);
		signe = 1;
	}
	if (n >= 10)
    {
        ft_putnbr_neg(n /10, signe);
        ft_putnbr_neg(n % 10, signe);
    }
    else
	{
		if (signe)
			ft_putchar('-');
        ft_putchar(48 + n);
	}
}

int		 ft_cmp(int a, int b)
{
    return (a - b);
}

int		ft_op(int n)
{
	return (-1 * n);
}

int		ft_four(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	if (i >= 8)
		return (1);
	else
		return (0);
}

int     main(int argc, char **argv)
{
    int     i;
	int		tab[9];
	int		tab2[9];
//	int		*res;

	argv = argv;
	argc = argc;
    i = 0;
    while (i < 9)
    {
        tab[i] = i;
        i++;
	}
	while (i < 9)
    {
        if (i % 2 == 0)
			tab2[i] = i;
        else
			tab2[i] = i + 3;
		i++;
    }
//
//    ft_foreach(tab, 10, &ft_putnbr1);
//
//	res = ft_map(tab, 9, &ft_op);
//	i = 0;
/*	while (i < 9)
	{
		ft_putnbr_neg(res[i],0);
		i++;
		ft_putchar('\n');
	}
*/
//
//	ft_putnbr(ft_any(argv, &ft_four));
//
//	ft_putnbr(ft_count_if(argv, &ft_four));
//
	ft_putnbr(ft_is_sort(tab, 9, &ft_cmp));
	ft_putchar('\n');
	ft_putnbr(ft_is_sort(tab2, 9, &ft_cmp));
    return (0);
}

