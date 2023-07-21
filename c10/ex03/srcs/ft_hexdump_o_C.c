/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump_o_C.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft.h"

static void	disp_o_C_hex(char *str)
{
	int	i;

	i = -1;
	while (++i < 16)
	{
		if (i % 8 == 0)
			ft_putchar(' ');
		if (str[i] )
		{
			ft_putchar(' ');
			ft_putchar (BASE16[str[i] / 16]);
			ft_putchar (BASE16[str[i] % 16]);
		}
		else
			ft_putstr("   ");		
	}
}

static void disp_o_c_char(char *str)
{
	int	i;

	ft_putstr("  |");
	i = -1;
	while (++i < 16)
	{
		if (str[i] >=32 && str[i] <= 126)
			ft_putchar (str[i]);
		else if (!str[i])
			break;
		else
			ft_putchar ('.');
	}
	ft_putstr("|");
}

static void hexdump_o_C_no_param(void)
{
	char	bf;
	char	str[16];
	int		i;
	int		addr;

	i = -1;
	addr = 0;
	while (read(1, &bf, 1))
	{
		str[++i] = bf;
		if (i == 15)
		{
			i = -1;
			ft_addr_hex (addr, 8);
			ft_putchar (' ');
			disp_o_C_hex (str);
			disp_o_c_char (str);
			ft_putchar('\n');
			addr += 16;
			i = -1;
		}
	}
}

static void	disp_o_C(char *str, int size, int addr, int loop)
{
	if (addr + 16 < size)
	{
		ft_addr_hex (addr, 8);
		// ft_putchar (' ');
		disp_o_C_hex (&str[addr]);
		disp_o_c_char (&str[addr]);
		ft_putchar ('\n');
		disp_o_C(str, size, addr + 16, loop + 1);
	}
	else
	{
		ft_addr_hex (addr, 8);
		disp_o_C_hex (&str[addr]);
		disp_o_c_char (&str[addr]);
		ft_putchar ('\n');
	}
}

void	hexdump_o_C(int argc, char **argv)
{
	size_t	size;
	char	*str;

	if (argc < 3)
		hexdump_o_C_no_param();
	else
	{
		size = ft_file_size (argv, 2, argc, &str);
		if (size > 0)
		{
			disp_o_C (str, size, 0, 1);
			free (str);
		}
	}
}