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

#include "ft_split.c"
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*charset;
	char	**strs;
	int		i;

	charset = "&&";
	str = "this&&is&&string&&split";
	// str = "this&&&&string&&split";
	// printf ("sep  = %d\n", count_word(str, charset));
	strs = ft_split(str, charset);
	i = -1;
	while (strs[++i])
	{
		printf ("%s\n", strs[i]);
	}
	i = -1;
	while (strs[++i])
	{
		free (strs[i]);
	}
	free (strs);
	return (0);
}
