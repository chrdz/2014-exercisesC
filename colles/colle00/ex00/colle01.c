/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourrie <pbourrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/30 20:45:25 by pbourrie          #+#    #+#             */
/*   Updated: 2014/08/31 17:02:41 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_char(int x, int y, int ix, int iy)
{
	if ((ix == 1 && iy == 1) || (ix == x && iy == y))
		ft_putchar('/');
	else if ((ix == x && iy == 1) || (ix == 1 && iy == y))
		ft_putchar('\\');
	else if (iy == 1 || ix == 1 || ix == x || iy == y)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

int		colle(int x, int y)
{
	int ix;
	int iy;

	ix = 1;
	iy = 1;
	if (x <= 0 || y <= 0)
		return (0);
	while (iy <= y)
	{
		while (ix <= x)
		{
			ft_print_char(x, y, ix, iy);
			ix++;
		}
		ix = 1;
		iy++;
		ft_putchar('\n');
	}
	return (0);
}
