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
void    my_print_list_char(void *);
void    my_print_list_int(void *);
t_list	*my_ft_create_elem_char(void *data);
t_list	*my_ft_create_elem_int(void *data);
void	my_list_push_front(t_list **begin_list, void *data, t_list *(*f)(void *));

#endif
