/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 13:57:52 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/09 17:04:23 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int		i;
	int		*res;

	res = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		*(res + i) = f(*(tab + i));
		i++;
	}
	return (res);
}
