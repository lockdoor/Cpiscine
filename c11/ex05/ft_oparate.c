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

#include "ft.h"

void	add(int a, int b)
{
	ft_putnbr (a + b);
}

void	minus(int a, int b)
{
	ft_putnbr (a - b);
}

void	multiply(int a, int b)
{
	ft_putnbr (a * b);
}

void	divide(int a, int b)
{
	if (b)
		ft_putnbr (a / b);
	else
		ft_putstr ("Stop : division by zero");
}

void	modulo(int a, int b)
{
	if (b)
		ft_putnbr (a % b);
	else
		ft_putstr ("Stop : modulo by zero");
}
