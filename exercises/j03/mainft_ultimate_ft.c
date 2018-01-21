/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainft_ultimate_ft.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 11:35:27 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/01 16:25:28 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

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

int     main(void)
{
	int		*ptr1;
	int		**ptr2;
	int		***ptr3;
	int		****ptr4;
	int		*****ptr5;
	int		******ptr6;
	int		*******ptr7;
	int		********ptr8;
	int     nbr;

	nbr = 43;
	ptr1 = &nbr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;

	put_nbr(********ptr8);
	ft_putchar('\n');
	put_nbr(nbr);
	ft_putchar('\n');
	ft_ultimate_ft(&ptr8);
	put_nbr(********ptr8);
	ft_putchar('\n');
	put_nbr(nbr);
	return (0);
}
