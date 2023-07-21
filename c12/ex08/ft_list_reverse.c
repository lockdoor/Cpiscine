/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*next;
	t_list	*current;
	t_list	*prev;

	current = *begin_list;
	
	if (current && current->next)
	{
		next = current->next;
		current->next = (void *) 0;
		while (next)
		{
			prev = current;
			current = next;
			next = current->next;
			current->next = prev;
		}
		*begin_list = current;
	}
}

/*
void	ft_list_reverse(t_list **begin_list)
{
	int len;
	t_list	*el;
	t_list	*last;

	len = ft_list_size(*begin_list);
	last = ft_list_at (*begin_list, len - 1);
	while (--len >= 0)
	{
		el = ft_list_at (*begin_list, len);
		if (len > 0)
			el->next = ft_list_at (*begin_list, len - 1);
		else
			el->next = (void *) 0;
	}
	*begin_list = last;
}
*/