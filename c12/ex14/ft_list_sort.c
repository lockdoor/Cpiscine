/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*ptr;
	t_list	*ptr2;
	t_list	*next;

	ptr = *begin_list;
	while (ptr)
	{
		ptr2 = *begin_list;
		while (ptr2->next)
		{
			if (((int (*)(void *, void *))cmp)(ptr2->data, ptr2->next->data) > 0)
			{
				next = ptr2->data;
				ptr2->data = ptr2->next->data;
				ptr2->next->data = next;
			}
			ptr2 = ptr2->next;
		}
		ptr = ptr->next;
	}
}

/* index algorithm
void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	t_list	*next;
	t_list	*prev;
	int		i;

	i = 0;
	while (i < ft_list_size (*begin_list) - 1)
	{
		current = ft_list_at(*begin_list, i);
		next = ft_list_at(*begin_list, i + 1);
		if (((int (*)(void *, void *))cmp)(current->data, next->data) > 0)
		{	
			if (i == 0)
				*begin_list = next;
			else
			{
				prev = ft_list_at(*begin_list, --i);
				prev->next = next;
			}
			current->next = next->next;
			next->next = current;
		}
		else
			++i ;
	}
}
*/
