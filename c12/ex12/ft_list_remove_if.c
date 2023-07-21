/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
			int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*prev;

	current = *begin_list;
	prev = (void *) 0;
	while (current)
	{
		if (((int (*)(void *, void *))cmp)(current->data, data_ref) == 0)
		{
			if (!prev)
				*begin_list = current->next;
			else
				prev->next = current->next;
			free_fct (current->data);
			free_fct (current);
			if (!prev)
				current = *begin_list;
			else
				current = prev->next;
			continue ;
		}
		prev = current;
		current = current->next;
	}
}
