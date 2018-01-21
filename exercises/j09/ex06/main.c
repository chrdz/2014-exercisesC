/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 00:30:49 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/12 16:18:15 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    ft_destroy(char ***factory);

int		main(void)
{
	char	***f;
	int		l;
	int		m;
	int		n;

	l = 0;
	m = 0;
	n = 0;
	t = (char ***)malloc(sizeof(char **) * 4);
	while (l < 3)
	{
		*t = (char **)malloc(sizeof(char *) * 4);
		m = 0;
		while (m < 3)
		{
			**t = (char *)malloc(sizeof(char) * 4);
			m++;
		}
		l++;
	}
	l = 0;
	m = 0;
    while (l < 3)
    {
		m = 0;
		while (m < 3)
		{
			n = 0;
            while (n < 3)
			{
				f[l][m][n] = 'a' + n;
				n++;
			}
			f[l][m][n] = '\0'
			m++;
		}
		l++;
    }
	ft_destroy(f);
	return (0);	
}
