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

#include "ft_find_next_prime.c"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	i;

	// i = INT_MAX - 200; //2147483647
	i = INT_MAX;
	printf ("num %d == %d\n", i, ft_find_next_prime (i));
	return (0);
}
