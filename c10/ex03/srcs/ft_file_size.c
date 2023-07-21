/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return size of all file
// and read all buffer to malloc
#include <stdlib.h>
#include "ft.h"
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

static char	*file_str(char **files, int index, int length, size_t size)
{
	int		i;
	char	*str;
	int		fd;
	char	bf;

	str = (char *) malloc (sizeof (char) * size);
	i = index - 1;
	while (++i < length)
	{
		fd = open (files[i], O_RDONLY);
		if (fd == -1)
			continue ;
		else
		{		
			while (read (fd, &bf, 1))
				*str++ = bf;
		}
		close (fd);
	}
	return (str - size);
}

size_t	ft_file_size(char **files, int index, int length, char **str)
{
	int			fd;
	size_t		size;
	char		bf;
	short		i;
	extern int	errno;

	size = 0;
	i = index - 1;
	(void) str;
	while (++i < length)
	{
		fd = open (files[i], O_RDONLY);
		if (fd == -1)
			ft_disp_file_err (files[i], errno, PROG_NAME);
		else
		{
			while (read (fd, &bf, 1))
				size++ ;
		}
		close (fd);
	}
	if (size > 0)
		*str = file_str (files, index, length, size);
	return (size);
}
