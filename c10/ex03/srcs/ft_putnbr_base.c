/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_putnbr_base(int nb, char *base, char *tab)
{
	long	n;
	int		base_len;
	char	*tmp;

	n = (long) nb;
	base_len = ft_strlen (base);
	if (!base_len || ft_is_dup_char (base) || ft_is_forbidden_char (base))
		return (-1);
	tmp = tab;
	if (n < 0)
		n *= -1;
	while (n / base_len)
	{
		*tmp++ = base[n % base_len];
		n /= base_len;
	}
	*tmp++ = base[n % base_len];
	if (nb < 0)
		*tmp = '-';
	ft_rev_str(tab);
	return (0);
}
