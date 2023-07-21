#include "ft.h"

t_bool check_bad_option(char *argv)
{
	if (argv[0] == '-' && argv[1] != 'c' && argv[1] != '\0')
	{
		ft_putstr ("ft_tail: invalid option -- ");
		ft_putstr (&argv[1]);
		ft_putstr ("\nusage: tail -c # [file ...]");
		return (TRUE);
	}
	return (FALSE);
}

t_bool	check_option_only (char *argv)
{
	if (argv[0] == '-' && argv[1] == 'c' && argv[2] == '\0')
	{
		return (TRUE);
	}
	return (FALSE);
}

t_bool	check_option_offset (char *argv)
{
	if (argv[0] == '-' && argv[1] == 'c' && argv[2] != '\0')
	{
		return (TRUE);
	}
	return (FALSE);
}

t_bool	check_bad_offset(char *argv, int *size)
{
	int	i;

	i = 0;
	if (argv[i] == '-' || argv[i] == '+')
		i++ ;
	while (argv[i])
	{
		if (argv[i] < '0' || argv[i] > '9')
		{
			ft_putstr ("ft_tail: illegal offset -- ");
			ft_putstr (&argv[i]);
			ft_putstr ("\n");
			return (TRUE);
		}
		i++ ;
	}
	*size = ft_atoi(argv);
	*size = ABSOLUTE(*size);
	return (FALSE);
}