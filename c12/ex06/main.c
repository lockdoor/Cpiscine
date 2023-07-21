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

int	main(void)
{
	char	*strs[] = {"grapes", "apple", "dewberry",\
						"honey", "banana", "fig",\
						"carrot", "egg", "dog", (void *)0};
	t_list	*list_str;

	printf ("============= list put str ===============\n");
	list_str = my_list_push_strs (5, strs);
	my_list_foreach (list_str, &my_print_list_char);
	ft_list_clear (list_str, &free);
}
