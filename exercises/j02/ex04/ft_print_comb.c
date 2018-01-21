/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/29 07:10:08 by crodrigu          #+#    #+#             */
/*   Updated: 2014/08/29 22:52:39 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

int		ft_print(int a, int b, int c)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	if (a < 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
