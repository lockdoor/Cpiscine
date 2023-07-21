/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
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

void	ft_print_arr(char *arr, char max, int size)
{
	int	i;

	i = 0;
	while (i < size)
		ft_putchar (arr[i++]);
	if (*arr != max)
		write (1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	v[10];
	char	v_max[10];
	int		flag;
	int		base;

	if (n < 1 || n > 9)
		return ;
	flag = -1;
	while (++flag < n)
	{
		v[flag] = flag + '0';
		v_max[flag] = (10 - n) + flag + '0';
	}
	ft_print_arr (v, v_max[0], n);
	while (v[0] != v_max[0])
	{
		flag = n - 1;
		while (v[flag] == v_max[flag])
			--flag ;
		base = ++(v[flag]);
		while (flag < n)
			v[++flag] = ++base;
		ft_print_arr (v, v_max[0], n);
	}
}
