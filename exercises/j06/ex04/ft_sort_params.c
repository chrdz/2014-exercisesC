/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/04 18:20:39 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/04 23:38:37 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_swap(char *a, char *b)
{
    char    tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int     ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
		s2++;
    }
    return (*s1 - *s2);
}

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

int     main(int argc, char **argv)
{
    int     i;
	int		j;

	i = 1;
	j = 1;
	while (j < argc)
	{
		i = 1;
		while (i < argc)
		{
			if (ft_strcmp(*(argv + i), *(argv + i + 1)) < 0)
				ft_swap(*(argv + i), *(argv + i + 1));
			i++;
		}
		j++;
	}
	i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i++;
    }
    return (0);
}
