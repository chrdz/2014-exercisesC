/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 05:56:33 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/02 15:43:13 by crodrigu         ###   ########.fr       */
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

int		ft_is_prime(int nb)
{
	int		i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb % 2 == 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int		main(void)
{
	ft_putnbr(ft_is_prime(9));
	ft_putnbr(ft_is_prime(27));
	ft_putnbr(ft_is_prime(13));
	ft_putnbr(ft_is_prime(90));
	return (0);
}
