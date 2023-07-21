/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	(void) argc;
	while (argv[++i])
		ft_putstr (argv[i]);
	return (0);
}

// cc -Wall -Wextra -Werror ft_print_params.c && ./a.out test1 test2 test3 | cat -e