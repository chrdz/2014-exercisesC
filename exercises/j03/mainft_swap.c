/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainft_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 23:03:34 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/01 23:20:36 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    put_nbr(int n)
{
    if (n >= 10)
    {
        put_nbr(n / 10);
        put_nbr(n % 10);
    }
    else
        ft_putchar(48 + n);
}

void    ft_putstr(char *str)
{
    int     i;

    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i ++;
    }
}

int     main(void)
{
    int    *c;
    int    *d;

    *c = 111111111;
    *d = 2374623;
	put_nbr(c);
	ft_putchar('\n');
	put_nbr(d);
	ft_putchar('\n');
	ft_swap(c, d);
	put_nbr(c);
    ft_putchar('\n');
    put_nbr(d);
    ft_putchar('\n');
    return (0);
}
