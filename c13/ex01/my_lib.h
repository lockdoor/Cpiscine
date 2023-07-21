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

#ifndef MY_LIB
# define MY_LIB
# include "ft_btree.h"

void    print_node(void *data);
void    print_node_int(void *data);
void    print_node_int2(void *data);
void	btree_foreach(t_btree *node, void (*f)(void *));
int		ft_strcmp(void *s1, void *s2);
void    btree_insert_data (t_btree **root, void *item, int (*cmpf)(void *, void *));
t_btree	*btree_create_node_int(void *item);
int		intcpm(void *n1, void *n2);

#endif
