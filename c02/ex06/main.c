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

#include "ft_str_is_printable.c"
#include <stdio.h>

int	main(void)
{
	printf ("%10s\t %d\n", "THETOY", ft_str_is_printable ("THETOY"));
	printf ("%10s\t %d\n", "The toy", ft_str_is_printable ("The toy"));
	printf ("%10s\t %d\n", "The\ttoy1", ft_str_is_printable ("The\ttoy1"));
	printf ("%10s\t %d\n", "The\ntoy_", ft_str_is_printable ("The\ntoy_"));
	return (0);
}
