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

#include "ft_convert_base.c"
#include <stdio.h>

int	main(void)
{
	char	*base_from;
	char	*base_to;
	char	*nbr;
	char	*result;

	nbr = "-255";
	// nbr = "-1";
	base_from = "01";
	// base_from = "0123456789";
	// base_to = "0123456789";
	// base_to = "0123456789abcdef";
	base_to = "01";
	result = ft_convert_base (nbr, base_from, base_to);
	printf ("nbr = %s\tbase_from = %s\tnbr = %s\tbase_to = %s\n", nbr, base_from, result, base_to);
	free (result);
	return (0);
}
