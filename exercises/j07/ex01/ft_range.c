/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 13:15:44 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/05 23:31:49 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		j;
	int		*tab;

	if (min > max)
		return (0);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	i = min;
	j = 0;
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	tab[j] = 0x0;
	return (tab);
}
