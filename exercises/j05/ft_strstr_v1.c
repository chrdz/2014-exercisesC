/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 23:30:19 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/03 12:06:38 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strcpy(char *dest, char *src);

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int		tmp;
	int		i;
	int		j;
	int		w;

	w = 0;
	tmp = 0;
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		tmp = i;
		if (str[i] != to_find[j])
		{
			i++;
			j = 0;
		}
		if (str[i] == to_find[j])
			w = 1;
		while (str[i] == to_find[j])
		{
			i++;
			j++;
			if (j == ft_strlen(to_find))
			{
				ft_putstr(&str[tmp]);
				return (&str[tmp]);
			}
		}	
		if (w == 1)
			i = tmp + 1;
	}
	return (0);
}
