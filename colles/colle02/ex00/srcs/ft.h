/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 11:33:49 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/14 22:39:45 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

t_list				*ft_create_elem(char data);
void				ft_list_push_back(t_list **begin_list, char data);
int					ft_strcmp(char *s1, char *s2);
int					ft_list_size(t_list *begin_list);
void				ft_free_list(t_list *list);
int					ft_length_col(char *str);
int					ft_length_line(char *str);
void				ft_print_res_colle(int num, int x, int y);
void				ft_comp_colle(char *tab, int x, int y);
int					ft_comp_one_colle(char *tab, char *(*f)(int, int));
char				ft_print_char_zero(int x, int y, int c, int l);
char				*ft_run_zero(char *tab, int x, int y);
char				ft_print_char_one(int x, int y, int c, int l);
char				*ft_run_one(char *tab, int x, int y);
char				ft_print_char_two(int x, int y, int c, int l);
char				*ft_run_two(char *tab, int x, int y);
char				ft_print_char_three(int x, int y, int c, int l);
char				*ft_run_three(char *tab, int x, int y);
char				ft_print_char_four(int x, int y, int c, int l);
char				*ft_run_four(char *tab, int x, int y);
char				*ft_colle_zero(int x, int y);
char				*ft_colle_one(int x, int y);
char				*ft_colle_two(int x, int y);
char				*ft_colle_three(int x, int y);
char				*ft_colle_four(int x, int y);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int n);
#endif
