/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_put_char_to_hex(char c)
{
	char	hex[17];
	int		i;

	i = -1;
	while (++i < 10)
		hex[i] = '0' + i;
	--i;
	while (++i < 16)
		hex[i] = 87 + i;
	hex[i] = '\0';
	ft_putchar ('\\');
	ft_putchar (hex[c / 16]);
	ft_putchar (hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	(void) str;
	while (*str)
	{
		if (*str < 32 || *str > 126)
			ft_put_char_to_hex (*str);
		else
			ft_putchar (*str);
		str++ ;
	}
}
