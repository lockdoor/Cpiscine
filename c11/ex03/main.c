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

#include "ft_count_if.c"
#include <stdio.h>
#include <stdlib.h>

int	is_space(char *str)
{
	while (*str)
	{
		if (*str == 32)
			return (1);
		str++ ;
	}
	return (0);
}

int	main(void)
{
	char *strs[] = {"hello", "lockdoor", "goodbye",\
			"he llo", "lock door", "goodbye", NULL};
	// char *strs2[] = {"he llo", "lock door", "goodbye", NULL};

	printf ("strs = %d\n", ft_count_if (strs, 5, &is_space));

	return (0);
}
