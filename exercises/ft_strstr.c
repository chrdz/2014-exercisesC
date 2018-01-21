/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 23:30:19 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/04 19:33:35 by thunerbl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!to_find)
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&(str[i - j]));
			}
			i++;
			j++;
		}
	//	else if (j != 0)
	//	{
	//		j = 0;
	//	}
		if (str[i] != to_find[j])
			i++;
	}
	return (NULL);
}
