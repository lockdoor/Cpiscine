/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
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

void	ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++ ;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*tab;

	if (size <= 0)
	{
		tab = (char *) malloc (sizeof (char) * 1);
		*tab = '\0';
		return (tab);
	}
	i = -1;
	len = 0;
	while (++i < size)
		len += ft_strlen (strs[i]);
	len += ft_strlen (sep) * (size - 1);
	tab = (char *) malloc (sizeof (char) * (len + 1));
	i = -1;
	while (++i < size)
	{
		ft_strcat (tab, strs[i]);
		if (i < size -1)
			ft_strcat (tab, sep);
	}
	return (tab);
}
