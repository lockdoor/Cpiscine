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
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	t_btree *node;
	// char	*text[] = {"text4", "text5", "text1", "text6", "text2", "text3", NULL};
	

	// node = NULL;
	// for (int i = 0; text[i]; i++)
	// {
	// 	printf ("====== time %d input %s ======\n", i + 1, text[i]);
	// 	btree_insert_data (&node, text[i], &ft_strcmp);
	// 	btree_apply_prefix (node, &print_node);
	// }
	// btree_foreach (node, &print_node); 

	
	
	int nb[] = {10, 30, 40, 35, 20, 47, 5, 14, 17, 11};
	// int nb[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5};
	int size = sizeof(nb) / sizeof(int);
	node = NULL;
	for (int i = 0; i < size; i++)
	{
		printf ("====== time %d input %d ======\n", i + 1, nb[i]);
		btree_insert_data (&node, &nb[i], &intcpm);
		// btree_apply_prefix (node, &print_node_int2);
		// printf ("\n");
	}

	printf ("====== btree_apply_prefix ======\n");
	btree_apply_prefix (node, &print_node_int2);
	printf ("\n");

	printf ("====== btree_apply_infix ======\n");
	btree_apply_infix (node, &print_node_int2);
	printf ("\n");

	printf ("====== btree_apply_suffix ======\n");
	btree_apply_suffix (node, &print_node_int2);
	printf ("\n");
	return (0);
}
