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

int	main(void)
{
	t_list	*list;
	char	*ptr_c;
	int		*ptr_n;

	list = ft_create_elem("Hello lockdoor");
	ptr_c = (char *) list->data;
	printf ("%p\t%s\n", list, ptr_c);

	char	c = 'A';
	list = ft_create_elem(&c);
	ptr_c = (char *) list->data;
	printf ("%p\t%c\n", list, *ptr_c);

	int		nbr[] = {1, 2};
	list = ft_create_elem(nbr);
	ptr_n = (int *) list->data;
	printf ("%p\t%d\n", list, *ptr_n);

	int		nb = 42;
	list = ft_create_elem(&nb);
	ptr_n = (int *) list->data;
	printf ("%p\t%d\n", list, *ptr_n);
}
