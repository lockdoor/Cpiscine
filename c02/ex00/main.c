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

#include "ft_strcpy.c"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define SIZE 3

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(void)
{
	char	dest[SIZE];

	ft_putstr (ft_strcpy(dest, "hello"));
	return (0);
}
