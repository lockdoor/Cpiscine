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
#include <stdlib.h>
#include "ft_list.h"
#include "my_lib.h"

void put_el (t_list *elem)
{
	char	*str;
	if (elem){
		str = (char *) elem->data;
		printf ("%p\t%10s\t%p\n", elem, str, elem->next);
	}
	else
		printf ("%p\n", elem);
}

int	main(void)
{
	char	*strs[] = {"lockdoor", "oumie", "apple",\
						"pitsanu", "namnil", "ton",\
						"lockdoor", "pitsanu", (void *)0};
	t_list	*list_str;
	t_list	*find;
	char	*str;
	
	list_str = my_list_push_strs (20, strs);
	my_list_foreach (list_str, &my_print_list_char);
	printf ("++++++++++++++\n");
	str = "pitsanud";
	find = ft_list_find (list_str, str, ft_strcmp);
	put_el (find);
	str = "pitsanu";
	find = ft_list_find (list_str, str, ft_strcmp);
	put_el (find);
	str = "ton";
	find = ft_list_find (list_str, str, ft_strcmp);
	put_el (find);
	ft_list_clear (list_str, &free);
}
