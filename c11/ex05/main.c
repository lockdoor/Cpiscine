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

#include "ft.h"

void	do_op(char *s1, char *s2, void (*f)(int, int))
{
	int	a;
	int	b;

	a = ft_atoi(s1);
	b = ft_atoi(s2);
	f (a, b);
	ft_putchar ('\n');
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+' && argv[2][1] == '\0')
			do_op (argv[1], argv[3], &add);
		else if (argv[2][0] == '-' && argv[2][1] == '\0')
			do_op (argv[1], argv[3], &minus);
		else if (argv[2][0] == '*' && argv[2][1] == '\0')
			do_op (argv[1], argv[3], &multiply);
		else if (argv[2][0] == '/' && argv[2][1] == '\0')
			do_op (argv[1], argv[3], &divide);
		else if (argv[2][0] == '%' && argv[2][1] == '\0')
			do_op (argv[1], argv[3], &modulo);
		else
			ft_putstr ("0\n");
	}
	return (0);
}
