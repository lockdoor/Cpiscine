/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*str)
		str++ ;
	return (str - s);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*copy;
	int		index;

	size = ft_strlen(src);
	copy = (char *) malloc (sizeof (char) * (size + 1));
	index = -1;
	while (src[++index])
		copy[index] = src[index];
	copy[index] = '\0';
	return (copy);
}
