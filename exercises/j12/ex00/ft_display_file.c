/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 17:53:15 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/11 18:28:10 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_file.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void   ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putchar_error(char c)
{
	write(2, &c, 1);
}

void	ft_putstr_error(char *str)
{
	while (*str)
	{
		ft_putchar_error(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[11];

	if (argc < 2)
	{
		ft_putstr_error("File name missing.\n");
	}
	if (argc == 2)
	{
		ret = 0;
		fd = open(argv[1], O_RDONLY);
		while ((ret = read(fd, buf, 10)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		close(fd);
	}
	if (argc > 2)
		ft_putstr_error("Too many arguments.\n");
	return (0);
}
