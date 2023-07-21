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

#include "ft_strncat.c"
#include <stdio.h>
#include <string.h>

#define SIZE 15

int	main(void)
{
	char	dest1[30] = "01234";
	char	dest2[30] = "01234";
	char	*src;

	src = "56789";
	printf ("%s\n", strncat (dest1, src, SIZE));
	printf ("%s\n", ft_strncat (dest2, src, SIZE));
	return (0);
}
