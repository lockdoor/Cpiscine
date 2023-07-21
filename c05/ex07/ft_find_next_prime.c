/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_is_prime(int nb)
// {
// 	int	n;

// 	n = 3;
// 	if (nb == 2)
// 		return (1);
// 	if (nb < 2 || nb % 2 == 0)
// 		return (0);	
// 	while (n < nb)
// 	{
// 		if (nb % n == 0)
// 			return (0);
// 		n += 2;
// 	}
// 	return (1);	
// }

int	is_prime_recursive(int nb, int n)
{
	if ((((nb != 2 && nb != n) && (nb % 2 == 0 || nb % n == 0))) || nb < 2)
		return (0);
	if (nb == 2 || n > 46340 || n * n > nb)
		return (1);
	return (is_prime_recursive (nb, n + 2));
}

int	ft_is_prime(int nb)
{
	return (is_prime_recursive (nb, 3));
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime (nb) == 0)
	{
		if (nb % 2 == 0)
			nb++ ;
		else
			nb += 2;
	}
	return (nb);
}
