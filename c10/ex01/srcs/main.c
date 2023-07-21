#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

extern int errno;

int	main(int argc, char **argv)
{
	int	i;
	int	fd;

	if (argc < 2)
		ft_disp_stdin();
    else
	{
		i = 0;
		while (++i < argc)
		{
			fd = open (argv[i], O_RDONLY);
			if (fd == -1)
				ft_disp_file_err (argv[i], errno);
			else
				ft_disp_file (fd);
			close (fd);
		}
	}
    return (0);
}
