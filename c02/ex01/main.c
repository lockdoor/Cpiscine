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

#include "ft_strncpy.c"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define SIZE 10

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(void)
{
	char	dest[SIZE];

	dest[4] = '9';
	ft_putstr (ft_strncpy(dest, "helo", 7));
	return (0);
}
