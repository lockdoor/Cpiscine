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

#include "ft_fibonacci.c"
#include <stdio.h>

int	main(void)
{
	int	n[] = {5, -1, 0, 2, 10};
	int	size;
	int	i;

	size = sizeof(n) / sizeof(*n);
	i = -1;
	while (++i < size)
		printf ("index %d == %d\n", n[i], ft_fibonacci (n[i]));
	return (0);
}
