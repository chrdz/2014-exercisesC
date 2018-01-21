/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 19:02:53 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/11 21:01:42 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_nbr(int n)
{
	if (n == 12)
	{
		printf("%d", 12);
		return (0);
	}
	else if (n == 24 || n == 0)
	{
		printf("%d", 12);
		return (1);
	}
	else if (((n / 12) % 2) == 0)
	{
		printf("%d", n % 12);
		return (0);
	}
	else if ((n / 12) == 1)
	{
		printf("%d", n % 12);
		return (1);
	}
	return (0);
}

void	ft_takes_place(int hour)
{
	printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
	if (ft_nbr(hour))
		printf("%s", " P.M. AND ");
	else
		printf("%s", " A.M. AND ");
	if (ft_nbr(hour + 1))
		printf("%s", " P.M.");
	else
		printf("%s", " A.M.");
}
