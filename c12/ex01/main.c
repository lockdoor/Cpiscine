/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"
#include "my_lib.h"

int	main(void)
{
	t_list	*elem;

	elem = NULL;
	ft_list_push_front (&elem, "text1");
	ft_list_push_front (&elem, "text2");
	ft_list_push_front (&elem, "text3");
	ft_list_push_front (&elem, "text3");

	my_list_foreach (elem, &my_print_list_char);
}
