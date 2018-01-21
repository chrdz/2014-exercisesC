/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainft_strcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 19:02:08 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/02 21:21:21 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str);

int		main(void)
{
    char    a[12] = "";
	char    b[] = "wellhell";

    ft_strcpy(a, b);
//	printf( "%s\n", b);
	ft_putstr(a);
	return (0);
}
