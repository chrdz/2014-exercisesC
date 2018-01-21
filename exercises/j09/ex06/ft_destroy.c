/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 00:12:59 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/12 16:33:21 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int		l;
	int		m;

	l = 0;
	m = 0;
	while (factory[l])
	{
		m = 0;
		while (factory[l][m])
		{
			free(factory[l][m]);
			m++;
		}
		free(factory[l]);
		l++;
	}
	free(factory);
}
