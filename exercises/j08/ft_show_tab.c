/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celegran <celegran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 16:29:27 by celegran          #+#    #+#             */
/*   Updated: 2014/09/05 22:57:49 by celegran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr_return(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		++str;
	}
	ft_putchar('\n');
}

void	ft_putnbr_return(int nbr)
{
	int		i;
	char	tab[10];

	i = 0;
	while (nbr > 0)
	{
		tab[i] = (nbr % 10) + '0';
		nbr /= 10;
		++i;
	}
	--i;
	while (i >= 0)
	{
		ft_putchar(tab[i]);
		--i;
	}
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	while (par->str)
	{
		i = 0;
		ft_putstr_return(par->str);
		ft_putnbr_return(par->size_param);
		while (par->tab[i])
		{
			ft_putstr_return(par->tab[i]);
			++i;
		}
		++par;
	}
}
