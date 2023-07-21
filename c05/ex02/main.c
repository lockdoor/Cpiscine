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

#include "ft_iterative_power.c"
#include <stdio.h>

int	main(void)
{
	printf ("%d\n", ft_iterative_power (5, 0));
	printf ("%d\n", ft_iterative_power (-2, 2));
	printf ("%d\n", ft_iterative_power (1, 0));
	printf ("%d\n", ft_iterative_power (0, 0));
	printf ("%d\n", ft_iterative_power (5, 3));
	return (0);
}
