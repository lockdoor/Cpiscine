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

#include "ft_foreach.c"
#include <unistd.h>

#define SIZE 8

static void	ft_putchar(char c)
{
	write (1, &c, 1);
}

static void	ft_putnbr(int nb)
{
	long	n;

	n = (int) nb;
	if (n < 0)
	{
		n *= -1;
		ft_putchar ('-');
	}
	if (n > 9)
	{	
		ft_putnbr (n / 10);
		ft_putchar((n % 10) + '0');
	}
	else
		ft_putchar((n % 10) + '0');
}

int	main(void)
{
	int arr[SIZE];
	int	i;

	i = -1;
	while (++i < SIZE)
		arr[i] = i * 10;
	ft_foreach (arr, SIZE, &ft_putnbr);
}
