/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	pos;
	int	base_len;

	n = 0;
	pos = 1;
	base_len = ft_strlen (base);
	if (!base_len || ft_is_dup_char (base) || ft_is_forbidden_char (base))
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			pos *= -1;
		str++ ;
	}
	while (ft_find_index (*str, base) != -1)
	{
		n = (n * base_len) + ft_find_index (*str, base);
		str++ ;
	}
	return (n * pos);
}
