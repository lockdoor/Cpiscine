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

#include "ft_strlcat.c"
#include <stdio.h>
#include <string.h>

#define SIZE 0

int	main(void)
{
	char	dest1[30] = "01234";
	char	dest2[30] = "01234";
	char	*src;

	src = "56789";
	printf ("%lu\t", strlcat (dest1, src, SIZE));
	printf ("%s\n", dest1);
	printf ("%u\t", ft_strlcat (dest2, src, SIZE));
	printf ("%s\n", dest2);
	return (0);
}
