/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 23:30:19 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/03 15:27:43 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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

//void	ft_putstr(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{		
		if (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				ft_putchar('f');
				return (&str[i - j]);
				ft_putchar('g');
			}
			i++;
			j++;
			ft_putchar('a');
		}	
		else if (j != 0)
		{
			i = i - j;
			ft_putchar('b');
		}
		if (str[i] != to_find[j])
		{
			i++;
			ft_putchar('c');
		}
		ft_putnbr(i);
		ft_putchar('\n');
		ft_putnbr(j);
	}
	return (0);
}
