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

#include "ft_putnbr.c"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	ft_putnbr (0);
	write (1, "\n", 1);
	ft_putnbr (10);
	write (1, "\n", 1);
	ft_putnbr (-10);
	write (1, "\n", 1);
	ft_putnbr (INT_MAX);
	write (1, "\n", 1);
	ft_putnbr (INT_MIN);
	write (1, "\n", 1);
	ft_putnbr (42);
	write (1, "\n", 1);
	return (0);
}
