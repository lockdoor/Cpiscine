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

#include "ft_putnbr_base.c"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	ft_putnbr_base (0, "010");
	write (1, "\n", 1);
	ft_putnbr_base (10, "");
	write (1, "\n", 1);
	ft_putnbr_base (-10, "01+3456789abcdef");
	write (1, "\n", 1);
	ft_putnbr_base (INT_MAX, "0-1");
	write (1, "\n", 1);
	ft_putnbr_base (INT_MIN, "01");
	write (1, "\n", 1);
	ft_putnbr_base (INT_MIN, "0123456789abcdef");
	write (1, "\n", 1);
	ft_putnbr_base (42, "0123456789");
	write (1, "\n", 1);
	return (0);
}
