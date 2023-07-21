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

int		main(void)
{
	char	*strs[] = {"lockdoor", "oumie", "apple",\
						"pitsanu", "namnil", "ton",\
						"lockdoor", "pitsanu", (void *)0};
	t_list	*list_str;
	char	*str;
	
	list_str = NULL;
	str = "lockdoor";
	list_str = my_list_push_strs (20, strs);
	my_list_foreach (list_str, &my_print_list_char);
	printf ("++ remove %s ++\n", str);
	ft_list_remove_if (&list_str, str, &ft_strcmp, &free);
	my_list_foreach (list_str, &my_print_list_char);
	ft_list_clear (list_str, &free);
	return (0);
}
