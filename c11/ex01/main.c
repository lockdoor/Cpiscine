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

#include "ft_map.c"
#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int	square(int x)
{
	return (x * x);
}

int	main(void)
{
	int arr[SIZE];
	int	i;
	int *sq;

	i = -1;
	while (++i < SIZE)
		arr[i] = i * 10;
	sq = ft_map (arr, SIZE, &square);
	i = -1;
	while (++i < SIZE)
		printf("%d, ", sq[i]);
	free (sq);
	return (0);
}
