/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainft_strncpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 22:32:30 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/02 23:24:27 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str);

int     main(void)
{
    char	a[] = "";
	char	b[] = "wellhell";
	
	ft_strncpy(a, b, 2);
	ft_putstr(a);
	return (0);
}
