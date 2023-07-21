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

#include "ft_strlcpy.c"
#include <stdio.h>
#include <string.h>

#define SIZE 15

int	main(void)
{
	char	str[] = "123456789";
	char	dest1[20];
	char	dest2[20];
	int	len;

	len = strlcpy(dest1, str, SIZE);
	printf ("len = %d\t%s\n", len, dest1);
	len = ft_strlcpy(dest2, str, SIZE);
	printf ("len = %d\t%s\n", len, dest2);
	return (0);
}
