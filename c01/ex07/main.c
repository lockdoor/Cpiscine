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

#include "ft_rev_int_tab.c"
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_arr(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar (arr[i++] + '0');
		if (i < size)
			write (1, ", ", 2);
	}
	ft_putchar ('\n');
}

int	main(void)
{
	int	*n;
	int	i;
	int	size;

	srand(time(NULL));
	size = 10;
	n = (int *) malloc (sizeof (int) * size);
	i = 0;
	while (i < size)
		n[i++] = rand() % 10;
	ft_print_arr (n, size);
	ft_rev_int_tab (n, size);
	ft_print_arr (n, size);
	free (n);
	return (0);
}
