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

#include "ft_strdup.c"
#include <stdio.h>

int	main(void)
{
	char	*src;
	char	*dup;

	src = "Hello Thailand";
	dup = ft_strdup (src);
	printf ("src\t%p\t%s\n", src, src);
	printf ("dup\t%p\t%s\n", dup, dup);
	free (dup);
	return (0);
}
