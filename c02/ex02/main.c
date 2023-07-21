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

#include "ft_str_is_alpha.c"
#include <stdio.h>

int	main(void)
{
	printf ("%10s\t %d\n", "The toy", ft_str_is_alpha ("The toy"));
	printf ("%10s\t %d\n", "Thetoy", ft_str_is_alpha ("Thetoy"));
	printf ("%10s\t %d\n", "Thetoy1", ft_str_is_alpha ("Thetoy1"));
	printf ("%10s\t %d\n", "Thetoy_", ft_str_is_alpha ("Thetoy_"));
	return (0);
}
