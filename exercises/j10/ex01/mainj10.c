/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainj10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 13:52:34 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/09 16:06:16 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include "ft_abs.h"

# define ABS(Value) (Value < 0 ? - Value : Value)

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n, int signe)
{
	if (n < 0)
	{
		n = ABS(n);
		signe = 1;
	}
	if (n >= 10)
    {
        ft_putnbr(n /10);
        ft_putnbr(n % 10);
    }
    else
		if (signe)
			ft_putchar('-');
        ft_putchar(48 + n);
}

int		ft_op(int n)
{
	return(-1 * n);
}

int     main(void)
{
    int     i;
	int		*tab;
	

    i = 0;
    while (i < 9)
    {
        tab[i] = i;
        i++;
    }
//    ft_foreach(tab, 10, &ft_putnbr);
	ft_map(tab, 9, &ft_putnbr); 
    return (0);
}
