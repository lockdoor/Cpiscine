/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

//push front
t_list	*ft_list_push_strs(int size, char **strs)
{
	int	i;
	t_list	*elem;
	t_list	*next;

	i = -1;
	elem = (void *) 0;
	while (++i < size && strs[i])
	{
		if (!elem)
			elem = ft_create_elem(strs[i]);
		else
		{
			next = elem;
			elem = ft_create_elem(strs[i]);
			elem->next = next;
		}
	}
	return (elem);
}
