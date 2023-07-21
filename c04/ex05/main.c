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

#include "ft_atoi_base.c"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "   \t++---+12345987a67";
	printf ("%s\n%d\n", str, ft_atoi_base ("10110", "01"));
	printf ("%s\n%d\n", str, ft_atoi_base (str, "0123456789"));
	printf ("%s\n%d\n", str, ft_atoi_base ("-ff", "0123456789abcdef"));
	return (0);
}
