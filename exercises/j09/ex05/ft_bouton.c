/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 23:04:57 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/11 23:17:32 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_middle(int a, int b, int c)
{
	if ((a <= b && b <= c) || (c <= b && b <= a))
		return (1);
	return (0);
}

int		ft_bouton(int i, int j, int k)
{
	if (ft_middle(i, j, k))
		return (j);
	else if (ft_middle(i, k, j))
		return (k);
	return (i);
}
