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
	t_list	*list_str;

	list_str = NULL;
	my_list_push_front (&list_str, "text1", &my_ft_create_elem_char);
	my_list_push_front (&list_str, "text2", &my_ft_create_elem_char);
	my_list_push_front (&list_str, "text3", &my_ft_create_elem_char);
	my_list_foreach (list_str, &my_print_list_char);
	printf ("list size is %d\n", ft_list_size(list_str));

	printf ("============================\n");

	t_list *list_nbr;
	int i;
	int result;

	list_nbr = NULL;
	i = 1;
	result = 1;
	while ( i <= 5)
	{
		result *= i++;
		my_list_push_front (&list_nbr, &result, &my_ft_create_elem_int);
	}
	my_list_foreach (list_nbr, &my_print_list_int);
	printf ("list size is %d\n", ft_list_size(list_nbr));
}
