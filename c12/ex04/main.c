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
	printf ("============= list put front ===============\n");
	t_list	*list_str1;
	list_str1 = NULL;
	my_list_push_front (&list_str1, "text1", &my_ft_create_elem_char);
	my_list_push_front (&list_str1, "text2", &my_ft_create_elem_char);
	my_list_push_front (&list_str1, "text3", &my_ft_create_elem_char);	
	my_list_foreach (list_str1, &my_print_list_char);

	printf ("============= list put back ===============\n");
	t_list	*list_str2;
	list_str2 = NULL;
	ft_list_push_back (&list_str2, "text1");
	ft_list_push_back (&list_str2, "text2");
	ft_list_push_back (&list_str2, "text3");
	my_list_foreach (list_str2, &my_print_list_char);
}
