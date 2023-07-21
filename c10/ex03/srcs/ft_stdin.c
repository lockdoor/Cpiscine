/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft.h"

void	print_char_hex(char *str, int addr)
{
	ft_putchar (' ');
	if (str[addr])
	{
		ft_putchar (BASE16[str[addr + 1] / 16]);
		ft_putchar (BASE16[str[addr + 1] % 16]);
		ft_putchar (BASE16[str[addr] / 16]);
		ft_putchar (BASE16[str[addr] % 16]);
	}
	else
	{
		ft_putchar (' ');
		ft_putchar (' ');
		ft_putchar (' ');
		ft_putchar (' ');
	}
	if (addr % 16 == 14)
		ft_putchar ('\n');
}

void	display_no_option(char *str, int size, int addr, int loop)
{	
	if (addr + 16 < size)
	{
		ft_addr_hex (addr, 7);
		while (addr < 16 * loop)
		{
			print_char_hex (str, addr);
			addr += 2;
		}
		display_no_option(str, size, addr, loop + 1);
	}
	else
	{
		ft_addr_hex (addr, 7);
		while (addr < 16 * loop)
		{
			print_char_hex (str, addr);
			addr += 2;
		}
		ft_addr_hex (size, 7);
		ft_putchar ('\n');
	}
}

void	ft_stdin_no_param(void)
{
	char			bf;
	unsigned int	addr;
	unsigned short	i;
	char			str[16];

	i = -1;
	addr = 0;
	while (read (1, &bf, 1))
	{		
		str[++i] = bf;
		if (i == 15)
		{
			i = 0;
			ft_addr_hex (addr, 7);
			while (i < 16)
			{
				print_char_hex (str, i);
				i += 2;
			}
			addr += 16;
			i = -1;
		}
	}
}

void	ft_stdin_no_option(int argc, char **argv)
{
	size_t	size;
	char	*str;

	size = ft_file_size (argv, 1, argc, &str);
	if (size > 0)
	{
		display_no_option (str, size, 0, 1);
		free (str);
	}
}
