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

#include "ft_any.c"
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
	char *strs1[] = {"hello", "lockdoor", "goodbye", NULL};
	char *strs2[] = {"hello", "lock door", "goodbye", NULL};

	printf ("strs1 = %d\n", ft_any (strs1, &is_space));
	printf ("strs2 = %d\n", ft_any (strs2, &is_space));
	return (0);
}
