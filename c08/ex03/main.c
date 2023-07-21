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

#include "ft_stock_str.h"

int	main(int argc, char **argv)
{
	t_stock_str	*par;

	par = ft_strs_to_tab(argc, argv);
	ft_show_tab(par);
	free (par);
	return (0);
}
