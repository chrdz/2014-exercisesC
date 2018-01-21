/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainft_strlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 22:41:42 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/01 22:56:57 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str);

void	put_nbr(int n)
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
	put_nbr(ft_strlen("onceuponatime"));
	return (0);
}
