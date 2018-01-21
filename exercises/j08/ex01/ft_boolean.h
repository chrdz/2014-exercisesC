/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 15:49:03 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/08 19:17:08 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN(nbr) (nbr % 2 == 0)

# define TRUE 1

# define FALSE 0

# define SUCCESS 1

# define EVEN_MSG "I have a pair number of arguments.\n"

# define ODD_MSG "I have an impair number of arguments.\n"

typedef int		t_bool;

#endif
