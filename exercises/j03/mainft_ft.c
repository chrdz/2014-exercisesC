/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 10:37:44 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/01 18:39:01 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);
 
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

int		main(void)
{
	int		*a;
	int		nbr;

	a = &nbr;
	nbr = 43;
	put_nbr(*a);
	ft_putchar('\n');
	put_nbr(nbr);
	ft_putchar('\n');
	ft_ft(a);
	put_nbr(*a);
	ft_putchar('\n');
	put_nbr(nbr);
	return (0);
}
