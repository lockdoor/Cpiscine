/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>

void	btree_apply_prefix(t_btree *root, void (*applyf)(void*))
{
    applyf(root->item);
	if (root->left)
		btree_apply_prefix(root->left, applyf);
	if (root->right)
		btree_apply_prefix(root->right, applyf);
}

void	btree_apply_infix(t_btree *root, void (*applyf)(void*))
{
	if (root->left)
		btree_apply_prefix(root->left, applyf);
    applyf(root->item);
	if (root->right)
		btree_apply_prefix(root->right, applyf);
}

void	btree_apply_suffix(t_btree *root, void (*applyf)(void*))
{
	if (root->left)
		btree_apply_prefix(root->left, applyf);
	if (root->right)
		btree_apply_prefix(root->right, applyf);
    applyf(root->item);
}
