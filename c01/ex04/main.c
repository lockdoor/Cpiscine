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

#include "ft_ultimate_div_mod.c"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 2;
	ft_ultimate_div_mod (&a, &b);
	printf ("a = %d\ta = %d\n", a, b);
	return (0);
}
