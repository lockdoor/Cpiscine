/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sqrt_recursive(int nb, int n)
{
	if (n * n == nb)
		return (1);
	else if (n > 46340 || n * n > nb || nb < 1)
		return (0);
	return (sqrt_recursive (nb, n + 1));
}

int	ft_sqrt(int nb)
{
	return (sqrt_recursive (nb, 1));
}
