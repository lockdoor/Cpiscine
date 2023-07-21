#include "ft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_stdin_no_param ();
	else
	{
		if (argv[1][0] == '-' && argv[1][1] == 'C' && argv[1][2] == '\0')
			hexdump_o_C (argc, argv);
		else if (argv[1][0] != '-')
			ft_stdin_no_option (argc, argv);
		else
			printf ("error param\n");
	}		
	return (0);
}