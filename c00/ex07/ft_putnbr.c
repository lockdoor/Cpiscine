/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;
	char	num[11];
	int		i;

	n = (long) nb;
	if (n < 0)
	{
		ft_putchar ('-');
		n *= -1;
	}
	if (n == 0)
		ft_putchar ('0');
	i = 0;
	while (n)
	{
		num[i++] = n % 10;
		n /= 10;
	}
	while (i)
		ft_putchar(num[--i] + '0');
}
