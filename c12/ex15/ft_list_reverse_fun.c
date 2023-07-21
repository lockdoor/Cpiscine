/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

// reverse only data
void	ft_list_reverse_fun(t_list *begin_list)
{
	void	*sw;
	t_list	*current;
	int		len;
	int		i;

	len = 0;
	current = begin_list;
	while (current && ++len)
		current = current->next;
	while (len)
	{
		current = begin_list;
		i = 0;
		while (++i < len)
		{
			sw = current->data;
			current->data = current->next->data;
			current->next->data = sw;
			current = current->next;
		}
		--len;
	}
}

/* index algorithm
void	ft_list_reverse_fun(t_list *begin_list)
{
	int		size;
	int		i;
	t_list	*tmp1;
	t_list	*tmp2;
	void	*p;

	size = 0;
	tmp1 = begin_list;
	while (tmp1 && ++size)
		tmp1 = tmp1->next;
	i = -1;
	while (++i < size / 2)
	{
		tmp1 = ft_list_at (begin_list, i);
		tmp2 = ft_list_at (begin_list, size - i - 1);
		p = tmp1->data;
		tmp1->data = tmp2->data;
		tmp2->data = p;
	}
}
*/
