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
/* memory leaks check
	https://www.youtube.com/watch?v=bhhDRm926qA
	leaks --atExit -- ./a.out
*/

#include "ft_range.c"
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*nb;
	int	*tmp;

	min = -1;
	max = 7;
	nb = ft_range (min, max);
	printf ("%p\t%d\n", nb, *nb);
	tmp = nb;
	while (min++ < max)
		printf ("%d, ", *tmp++);
	free (nb);
	return (0);
}
