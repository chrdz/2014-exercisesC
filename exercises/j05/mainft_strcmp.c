/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainft_strcmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 16:15:40 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/03 18:45:57 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(48 + n);
}

int		main(void)
{
	char	a[] = "n";
	char	b[] = "n";
	//int		c;

	//c = ft_strcmp(a, b);
	//ft_putnbr(ft_strcmp(a, b));
	printf("%d\n", ft_strcmp("aa", "az"));
	//ft_putchar('\n');
	printf("%d\n", ft_strcmp("well", "hell"));
	//ft_putnbr(ft_strcmp("well", "hell"));
	//ft_putchar('\n');
	///ft_putnbr(ft_strcmp("aa", "az"));
	//printf("%d", c);
	printf("%d\n", ft_strcmp(a, b));
	return (0);
}
