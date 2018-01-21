/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/06 14:22:34 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/07 18:27:10 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "mes_fonctions.h"

int    ft_squart(char s, int pos, char **tab)
{
	int		l;
	int		c;
	int		i;
	int		j;

	i = pos / 9;
	j = pos % 9;
	l = i - i % 3;
	c = j - j % 3;
	while (l <= i - i % 3 + 2)
	{
		c = j - j % 3;
		while (c <= j - j % 3)
		{
			if (tab[l][c] == s)
				return (0);
			c++;
		}
		l++;
	}
	return (1);
}

int		ft_line(char s, int pos, char **tab)
{
	int		c;
	int		l;

	c = 0;
	l = pos / 9;
	while (c < 9)
	{
		if (tab[l][c] == s)
			return (0);
		c++;
	}
	return (1);
}

int		ft_col(char s, int pos, char **tab)
{
	int		l;
	int		c;

	l = 0;
	c = pos % 9;
	while (l < 9)
    {
		if (tab[l][c] == s)
            return (0);
		l++;
    }
    return (1);
}

int		ft_solution(int pos, char **tab)
{
    int		s;

	if (pos == 81)
		return (1);
	if (tab[pos / 9][pos % 9] != '.')
		return (ft_solution(pos + 1, tab));
    s = '1';
	while (s <= '9')
	{
		if (ft_squart(s, pos, tab) 
			&& ft_line(s, pos, tab)
			&& ft_col(s, pos, tab))
		{
			tab[pos / 9][pos % 9] = s;
			if (ft_solution(pos + 1, tab))
				return (ft_solution(pos + 1, tab));
		}
		s++;
	}
	tab[pos / 9][pos % 9] = '.';
	return (0);
}

int		ft_nb_sol(int pos, char **tab, int *sol)
{
	int     s;

    if (pos == 81)
	{
		sol++;
		return (0);
	}
    if (tab[pos / 9][pos % 9] != '.')
        return (ft_nb_sol(pos + 1, tab, sol));
    s = '1';
    while (s <= '9')
    {
        if (ft_squart(s, pos, tab)
            && ft_line(s, pos, tab)
            && ft_col(s, pos, tab))
        {
            tab[pos / 9][pos % 9] = s;
            if (ft_nb_sol(pos + 1, tab, sol))
			{
                return (1);
			}
        }
        s++;
    }
    tab[pos / 9][pos % 9] = '.';
    return (0);
}
