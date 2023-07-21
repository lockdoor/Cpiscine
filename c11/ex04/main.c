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

#include "ft_is_sort.c"
#include <stdio.h>
#include <stdlib.h>

int subtrace(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int num1[] = {0, 1, 2, 3, 4, 6, 10};
	int num2[] = {10, 8, 5, 2, 0 , -10};
	int num3[] = {10, 8, 20, 2, 0 , -10};

	printf ("num1 = %d\n", ft_is_sort (num1, sizeof (num1) / sizeof (int), &subtrace));
	printf ("num2 = %d\n", ft_is_sort (num2, sizeof (num2) / sizeof (int), &subtrace));
	printf ("num3 = %d\n", ft_is_sort (num3, sizeof (num3) / sizeof (int), &subtrace));

	return (0);
}
