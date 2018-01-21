/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmainft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 02:27:33 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/03 15:26:18 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strstr(char *str, char *to_find);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str);

int     main(void)
{
    char    a[] = "llh";
    char    b[] = "wellhell";

	ft_strstr(b, a);
	//ft_putstr(ft_strstr(a, b));
    return (0);
}
