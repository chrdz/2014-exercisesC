/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 03:29:21 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/02 19:58:04 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		res;

	i = 1;
	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (i < nb)
	{
		i++;
		res = res * i;
	}
	return res;
}

int		main(void)
{
	ft_putnbr(ft_iterative_factorial(-5));
    ft_putnbr(ft_iterative_factorial(0));
    ft_putnbr(ft_iterative_factorial(2));
    ft_putnbr(ft_iterative_factorial(3));
    ft_putnbr(ft_iterative_factorial(5));
    ft_putnbr(ft_iterative_factorial(6));
	return (0);
}
