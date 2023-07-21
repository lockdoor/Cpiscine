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

#include <unistd.h>
#include "ft_sort_string_tab.c"

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
	write (1, "\n", 1);
}

int	main(void)
{
	char	*strs[] = {"lockdoor", "oumie", "apple", "pitsanu", "namnil", "ton", (void *) 0};
	
	for (int i = 0; strs[i]; i++)
		ft_putstr (strs[i]);
	ft_putstr ("\n ===================== \n");
	ft_sort_string_tab(strs);
	for (int i = 0; strs[i]; i++)
		ft_putstr (strs[i]);
}
