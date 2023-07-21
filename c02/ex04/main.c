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

#include "ft_str_is_lowercase.c"
#include <stdio.h>

int	main(void)
{
	printf ("%10s\t %d\n", "thetoy", ft_str_is_lowercase ("thetoy"));
	printf ("%10s\t %d\n", "Thetoy", ft_str_is_lowercase ("Thetoy"));
	printf ("%10s\t %d\n", "Thetoy1", ft_str_is_lowercase ("Thetoy1"));
	printf ("%10s\t %d\n", "Thetoy_", ft_str_is_lowercase ("Thetoy_"));
	return (0);
}
