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

#include "ft_recursive_factorial.c"
#include <stdio.h>

int	main(void)
{
	printf ("%d\n", ft_recursive_factorial (5));
	printf ("%d\n", ft_recursive_factorial (-1));
	printf ("%d\n", ft_recursive_factorial (1));
	printf ("%d\n", ft_recursive_factorial (0));
	return (0);
}
