/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	stock = (t_stock_str *) malloc (sizeof (t_stock_str) * ac);
	if (!stock)
		return ((void *) 0);
	i = -1;
	while (++i < ac - 1)
	{
		stock[i].size = ft_strlen (av[i + 1]);
		stock[i].str = av[i + 1];
		stock[i].copy = ft_strdup (av[i + 1]);
	}
	stock[i].size = 0;
	stock[i].str = (void *) 0;
	stock[i].copy = (void *) 0;
	return (stock);
}
