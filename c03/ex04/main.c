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

#include "ft_strstr.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	*to_find;

	str = "Hello Bangkok";
	to_find = "";
	printf ("%s\n", strstr (str, to_find));
	printf ("%s\n", ft_strstr (str, to_find));
	return (0);
}
