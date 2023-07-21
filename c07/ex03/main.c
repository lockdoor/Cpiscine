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

#include "ft_strjoin.c"
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"Pita", "Prayuth", "Pravit", "Tanathon", NULL};
	char	*sep;
	char	*str;

	sep = "&&";
	str = ft_strjoin (2, strs, sep);
	printf ("%s\n", str);
	free (str);
	return (0);
}
