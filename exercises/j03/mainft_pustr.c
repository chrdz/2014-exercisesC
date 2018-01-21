/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainft_pustr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 21:28:21 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/01 21:47:01 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str);

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
    char	*c;
    int		i;

	i = ;
    *c = "quarantetrois";
	while (c[i] != '\0')
		ft_ultimate_div_mod(c[i++]);
	return (0);
}
