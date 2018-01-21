/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 03:51:45 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/02 03:56:34 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (x < 0) 
		return (0);
	if (x == 0)
		return (1);
	return (ft_recursive_factorial(nb - 1)) * nb;
}

