/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*s;
	unsigned int	n;

	n = size;
	s = src;
	if (n != 0)
	{
		while (--n)
		{
			*dest++ = *s++;
			if (!*(s - 1))
				break ;
		}
	}
	if (n == 0)
	{
		*dest = '\0';
		while (*s++)
			;
	}	
	return (s - src - 1);
}

// unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int siz)
// {
// 	char			*d;
// 	const char		*s;
// 	unsigned int	n;

// 	d = dst;
// 	s = src;
// 	n = siz;
// 	if (n != 0)
// 	{
// 		while (--n != 0)
// 		{
// 			if (*s == '\0')
// 				break ;
// 			*d++ = *s++;
// 		}
// 	}
// 	if (n == 0)
// 	{
// 		if (siz != 0)
// 			*d = '\0';
// 		while (*s++)
// 			;
// 	}
// 	return (s - src - 1);
// }
