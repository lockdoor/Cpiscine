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
	char	*strs1[] = {"grapes", "apple", "dewberry",\
						"honey", "banana", "fig",\
						"carrot", "egg", "dog", (void *)0};
	char	*strs2[] = {"lockdoor", "oumie", "apple",\
						"pitsanu", "namnil", "ton",\
						"lockdoor", "pitsanu", (void *)0};
	t_list	*list_str1;
	t_list	*list_str2;

	printf ("+++++++ list1 sort +++++++\n");
	list_str1 = my_list_push_strs (20, strs1);
	printf ("size is %d\n", ft_list_size (list_str1));
	// my_list_foreach (list_str, &my_print_list_char);	
	ft_list_sort (&list_str1, &ft_strcmp);
	my_list_foreach (list_str1, &my_print_list_char);

	printf ("+++++++ list2 sort +++++++\n");
	list_str2 = my_list_push_strs (20, strs2);
	printf ("size is %d\n", ft_list_size (list_str2));
	// my_list_foreach (list_str, &my_print_list_char);	
	ft_list_sort (&list_str2, &ft_strcmp);
	my_list_foreach (list_str2, &my_print_list_char);

	printf ("+++++++ list sorted merge +++++++\n");
	ft_sorted_list_merge (&list_str1, list_str2, &ft_strcmp);
	printf ("size is %d\n", ft_list_size (list_str1));
	my_list_foreach (list_str1, &my_print_list_char);
	ft_list_clear (list_str1, &free);

	return (0);
}
