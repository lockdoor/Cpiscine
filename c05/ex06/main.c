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

#include "ft_is_prime.c"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	i;

	// i = -10;
	
	i = 2147483647 - 100; 
	while (++i <= INT_MAX)
	{
		printf ("num %d == %d\n", i, ft_is_prime (i));
		if (i == INT_MAX)
			break ;
	}


	// do
	// {
	// 	++i ;
	// 	printf ("num %d == %d\n", i, ft_is_prime (i));
	// } while (i < INT_MAX);
	

	// printf ("num %d == %d\n", i, ft_is_prime (i));
	// i = INT_MAX;
	// printf ("num %d == %d\n", i, ft_is_prime (i));
	return (0);
}
