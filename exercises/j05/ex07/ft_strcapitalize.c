/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 22:17:18 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/03 23:41:02 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0)
			str[i] = str[i] - 32;
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i - 1] <= 48 && str[i - 1] >= 57)
				str[i] = str[i] - 32;
			if (str[i - 1] <= 97 && str[i - 1] >= 122)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
