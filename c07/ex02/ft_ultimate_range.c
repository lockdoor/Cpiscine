/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*nb;
	int	*tmp;

	size = max - min;
	if (size <= 0)
	{
		*range = (void *) 0;
		return (0);
	}
	nb = (int *) malloc (sizeof (int) * size);
	if (!nb)
	{
		*range = (void *) 0;
		return (-1);
	}
	tmp = nb;
	while (min < max)
		*tmp++ = min++ ;
	*range = nb;
	return (size);
}
