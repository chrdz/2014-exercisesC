/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/29 02:42:53 by crodrigu          #+#    #+#             */
/*   Updated: 2014/08/29 03:47:12 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
		ft_putchar(letter--);
}
