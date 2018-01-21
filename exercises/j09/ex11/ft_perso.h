/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 14:57:05 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/12 16:52:30 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <string.h>

#define SAVE_AUSTIN_POWERS 1

typedef struct	s_perso
{
	char		*name;
	float		life;
	int			age;
	int			profession;
}				t_perso;

#endif
