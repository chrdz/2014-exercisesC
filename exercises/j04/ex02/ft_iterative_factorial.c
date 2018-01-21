/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 03:58:53 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/02 04:03:14 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_iterative_power(int nb, int power)
{
	int		res;
	int		i;

	res = 1;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		i++;
		res = res * i;
	}
	return (res);
}
