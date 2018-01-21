/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 22:19:20 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/09 23:13:02 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int		res;
	int		neg;

	neg = 0;
	res = 0;
	if (*str == '-')
	{
		neg = 1;
		str++;
	}
	while (*str && *str >= 48 && *str <= 57)
	{
		res = res * 10 + *str - '0';
		str++;
	}
	if (neg)
		res = res * (-1);
	return (res);
}

int		main(void)
{
	printf("%d\n", ft_atoi("fjksdhf"));
	printf("%d\n", ft_atoi("-483765dhf"));
	printf("%d\n", ft_atoi("4"));
	printf("%d\n", ft_atoi(""));
	return (0);
}
