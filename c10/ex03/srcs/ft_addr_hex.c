/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addr_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_addr_hex(int addr, int size)
{
	char	*addrstr;
	int		len;
	int		i;

	addrstr = (char *) malloc (sizeof(char) * size);
	ft_putnbr_base (addr, BASE16, addrstr);
	len = ft_strlen (addrstr);
	i = 0;
	while (++i <= size - len)
		ft_putchar ('0');
	ft_putstr (addrstr);
	free (addrstr);
}