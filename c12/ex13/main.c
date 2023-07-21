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
	char	*strs1[] = {"lockdoor", "oumie", "apple",\
						"pitsanu", "namnil", "ton",\
						"lockdoor", "pitsanu", (void *)0};
	char	*strs2[] = {"grapes", "apple", "dewberry",\
						"honey", "banana", "fig",\
						"carrot", "egg", "dog", (void *)0};
	t_list	*list_str1;
	t_list	*list_str2;
	
	printf ("+++++++ ft_list_merge +++++++\n");
	printf ("+++++++ list1 +++++++\n");
	list_str1 = my_list_push_strs (20, strs1);
	my_list_foreach (list_str1, &my_print_list_char);
	printf ("+++++++ list2 +++++++\n");
	list_str2 = my_list_push_strs (20, strs2);
	my_list_foreach (list_str1, &my_print_list_char);
	printf ("+++++++ list merge +++++++\n");
	ft_list_merge (&list_str1, list_str2);
	my_list_foreach (list_str1, &my_print_list_char);
	ft_list_clear (list_str1, &free);
	return (0);
}
