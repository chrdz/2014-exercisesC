/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainft_strupcase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 19:07:45 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/03 21:56:45 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
char    *ft_strupcase(char *str);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str);

int     main(void)
{
	printf("%p\n", ft_strupcase("whymy"));
	//ft_putstr(ft_strupcase("wellhell"));
    return (0);
}
