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

#include "ft_strcapitalize.c"
#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots\
	 quarante-deux; cinquante+et+un";

	printf ("%s\n", str);
	printf ("%s\n", ft_strcapitalize (str));
	return (0);
}
