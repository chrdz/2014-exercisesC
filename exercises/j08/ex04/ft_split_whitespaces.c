/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celegran <celegran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/04 15:49:27 by celegran          #+#    #+#             */
/*   Updated: 2014/09/08 22:09:22 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

intcount_words(char *str)
{
	int words;

	words = 0;
	while (*str)
	{
		if (*str != ' ' && *str != '\n' && *str != '\t' && *str)
		{
			++words;
			while (*str != ' ' && *str != '\n' && *str != '\t' && *str)
				++str;
		}
		else
			++str;
	}
	return (words);
}

char**ft_split_whitespaces(char *str)
{
	inti;
	intj;
	char**result;

	result = malloc(sizeof(char *) * (count_words(str) + 1));
	i = 0;
	while (*str)
	{
		while (*str == ' ' || *str == '\n' || *str == '\t')
			++str;
		j = 0;
		while (*(str + j) != ' ' && *(str + j) != '\n' && *(str + j) != '\t'
			   && *(str + j))
			++j;
		if (j)
		{
			result[i] = malloc(sizeof(char) * (j + 1));
			j = 0;
			while (*str != ' ' && *str != '\n' && *str != '\t' && *str)
				result[i][j++] = *str++;
			result[i++][j] = '\0';
		}
		result[i] = NULL;
	}
	return (result);
}
