/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*s;
	int		dest_len;
	int		n;

	n = (int) size;
	s = src;
	dest_len = 0;
	while (*dest)
	{
		dest_len++ ;
		dest++ ;
	}
	if (n > dest_len)
	{
		n -= dest_len;
		while (*src && --n)
			*dest++ = *src++;
	}
	else
		dest_len += (n - dest_len);
	*dest = '\0';
	while (*src)
		src++;
	return (dest_len + (src - s));
}
