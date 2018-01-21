/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 01:38:36 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/12 01:46:51 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned int    ft_collatz_conjecture(unsigned int base);

int		main(void)
{
	int		a;
	int		b;

	a = ft_collatz_conjecture(15);
	b = ft_collatz_conjecture(127);
	printf("%d\n", a);
    printf("%d\n", b);
	return (0);
}
