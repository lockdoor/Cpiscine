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

#include "ft_str_is_numeric.c"
#include <stdio.h>

int	main(void)
{
	printf ("%10s\t %d\n", "098764", ft_str_is_numeric ("098764"));
	printf ("%10s\t %d\n", "098 764", ft_str_is_numeric ("098 764"));
	printf ("%10s\t %d\n", "098E764", ft_str_is_numeric ("098E764"));
	printf ("%10s\t %d\n", "098?764", ft_str_is_numeric ("098?764"));
	return (0);
}
