/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_LIB_H
# define MY_LIB_H

# include "ft_list.h"

void	my_list_foreach(t_list *list, void(*f)(void *));
void	my_print_list_char(void *);
t_list	*my_list_push_strs(int size, char **strs);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
int		ft_strcmp(void *s1, void *s2);
void	ft_list_sort(t_list **begin_list, int (*cmp)());
int     ft_list_size(t_list *bebin_list);

#endif
