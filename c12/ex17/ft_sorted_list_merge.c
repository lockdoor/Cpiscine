/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1,
			t_list *begin_list2, int (*cmp)())
{
	t_list	*current;
	t_list	*tmp;
	t_list	*next;

	current = *begin_list1;
	while (current->next)
		current = current->next;
	current->next = begin_list2;
	current = *begin_list1;
	while (current)
	{
		tmp = *begin_list1;
		while (tmp->next)
		{
			if (((int (*)(void *, void *))cmp)(tmp->data, tmp->next->data) > 0)
			{
				next = tmp->data;
				tmp->data = tmp->next->data;
				tmp->next->data = next;
			}
			tmp = tmp->next;
		}
		current = current->next;
	}
}
