/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
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

void	ft_put_char_to_hex(char *str, int size)
{
	char	*base;
	int		col;

	base = "0123456789abcdef";
	col = -1;
	while (++col < 16 && str[col] && size--)
	{
		if (col % 2 == 0)
			ft_putchar (' ');
		ft_putchar (base[str[col] / 16]);
		ft_putchar (base[str[col] % 16]);
	}
	while (col < 16)
	{
		if (col % 2 == 0)
			ft_putchar (' ');
		write (1, "  ", 2);
		col++ ;
	}
}

void	ft_put_number_base(unsigned long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n > 16)
	{
		ft_put_number_base (n / 16);
		ft_putchar (base[n % 16]);
	}
	else
		ft_putchar (base[n % 16]);
}

void	ft_putstr(char *str, unsigned int *size, int *col)
{
	int	index;

	index = -1;
	ft_putchar (' ');
	while (++index < 16 && str[index] && *size)
	{
		if (str[index] < 32 || str[index] > 126)
			ft_putchar ('.');
		else
			ft_putchar (str[index]);
		*size = *size - 1 ;
	}
	*col = index;
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	addr_base10;
	int				col;
	char			*str;

	str = addr;
	while (*str && size)
	{
		addr_base10 = (unsigned long) str;
		write (1, "00000001", 8);
		ft_put_number_base (addr_base10);
		write (1, ":", 1);
		ft_put_char_to_hex (str, size);
		col = -1;
		ft_putstr(str, &size, &col);
		ft_putchar ('\n');
		str += col;
	}
	return (addr);
}
