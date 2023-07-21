/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_dup_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_dup_char(char *arr)
{
	char	*cmp;

	while (*arr)
	{
		cmp = arr + 1;
		while (*cmp)
		{
			if (*arr == *cmp)
				return (1);
			cmp++;
		}
		arr++ ;
	}
	return (0);
}
