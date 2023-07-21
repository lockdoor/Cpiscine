/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "my_lib.h"

int main(void)
{
    t_btree *node1;
    t_btree *node2;
    t_btree *node3;

    node1 = btree_create_node ("text1");
    node2 = btree_create_node ("text2");
    node3 = btree_create_node ("text3");
    print_node(node1);
    print_node(node2);
    print_node(node3);
    return (0);
}
