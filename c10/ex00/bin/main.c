/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int f;
	char *bf;

	if (argc < 2)
		ft_putstr ("File name missing.\n");
	else if (argc > 2)
		ft_putstr ("Too many arguments.\n");
	else
	{
		f = open (argv[1], O_RDONLY);
		if (f == -1)
		{
			ft_putstr ("Cannot read file\n");
		}
		else
		{
			while (read (f, &bf, 1))
				write (1, &bf, 1);
			ft_putchar ('\n');
		}
		close (f);
	}
	return (0);
}