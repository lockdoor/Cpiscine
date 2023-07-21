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
	printf ("\n");
	ft_putnbr (INT_MAX);
	printf ("\n");
	ft_putnbr (INT_MIN);
	printf ("\n");
	ft_putnbr (10);
	printf ("\n");
	ft_putnbr (-10);
	printf ("\n");
	ft_putnbr (42);
	printf ("\n");
	return (0);
}
