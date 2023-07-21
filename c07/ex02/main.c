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
	addpend_linked_list(arr, 5);
*/

#include "ft_ultimate_range.c"
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	*tmp;
	int	size;

	min = -1;
	max = -7;
	size = ft_ultimate_range (&range, min, max);
	printf ("size = %d\t", size);
	tmp = range;
	while (min++ < max)
		printf ("%d, ", *tmp++);
	free (range);
	return (0);
}
