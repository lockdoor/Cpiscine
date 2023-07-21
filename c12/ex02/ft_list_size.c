/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

// recursive
int ft_list_size(t_list *bebin_list)
{
	if (!bebin_list)
		return (0);
	else
		return (1 + ft_list_size(bebin_list->next));
}

/* iterate
int ft_list_size(t_list *bebin_list)
{
	int	count;

	count = 0;
	while (bebin_list)
	{
		++count ;
		bebin_list = bebin_list->next;
	}
	return (count);
}
*/