/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disp_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "ft.h"

void	ft_disp_file(char *filename, int offset)
{
	char	bf;
	int		file_size;
	int		fd;
	char	*file;
	char	*temp;

	fd = open (filename, O_RDONLY);
	file_size = 0;
	while (read (fd, &bf, 1))
		file_size++ ;
	close (fd);
	file = (char *) malloc (sizeof (char) * file_size);
	fd = open (filename, O_RDONLY);
	temp = file;
	while (read (fd, &bf, 1))
		*temp++ = bf;	
	close (fd);
	ft_putstr (file + file_size - offset);
	free (file);
}
