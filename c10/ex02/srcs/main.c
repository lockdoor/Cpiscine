/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

t_bool	is_multi_file(int argc, int index)
{
	if (argc - index > 1)
		return (TRUE);
	return (FALSE);
}

void	put_file_name(t_bool multi_file, char *argv)
{
	if (multi_file)
	{
		ft_putstr ("===> ");
		ft_putstr (argv);
		ft_putstr (" <===\n");
	}
}

void	open_file(int argc, char **argv, int offset, int index)
{
	int			fd;
	extern int	errno;
	t_bool		multi_file;

	multi_file = is_multi_file(argc, index);
	while (index < argc)
	{
		fd = open (argv[index], O_RDONLY);
		if (fd == -1)
			ft_disp_file_err (argv[index], errno, "ft_tail");
		else
		{
			put_file_name (multi_file, argv[index]);
			ft_disp_file (argv[index], offset);
			if (argc - index > 1)
				ft_putstr ("\n");
			
		}
		close (fd);
		index++ ;
	}
}

void	no_param(int argc)
{
	if (argc < 2)
		ft_disp_stdin();
}

int	main(int argc, char **argv)
{
	int			i;
	int			offset;

	no_param (argc);
	i = 0;
	offset = 0;
	while (++i < argc)
	{
		if (check_bad_option (argv[i]))
			break ;
		else if (check_option_only (argv[i]))
		{
			if (check_bad_offset(argv[++i], &offset))
				break ;
		}
		else if (check_option_offset (argv[i]))
		{
			if (check_bad_offset (&argv[i][2], &offset))
				break ;
		}
		else
			break ;
	}
	open_file (argc, argv, offset, i);
	return (0);
}
