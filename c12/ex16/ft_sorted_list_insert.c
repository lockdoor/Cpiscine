/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*current;
	t_list	*prev;
	t_list	*new_list;

	new_list = ft_create_elem(data);
	current = *begin_list;
	prev = (void *) 0;
	while (current)
	{
		if (((int (*)(void *, void *))cmp)(current->data, new_list->data) > 0)
		{
			if (!prev)
				*begin_list = new_list;
			else
				prev->next = new_list;
			new_list->next = current;
			return ;
		}
		prev = current;
		current = current->next;
	}
	prev->next = new_list;
}
