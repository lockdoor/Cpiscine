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

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *base)
{
	char	*p;

	p = base;
	while (*base)
		base++ ;
	return (base - p);
}

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

int	ft_is_forbidden_char(char *arr)
{
	while (*arr)
	{
		if (*arr == '+' || *arr == '-')
			return (1);
		arr++ ;
	}
	return (0);
}

void	ft_putnbr_base(int nb, char *base)
{
	long	n;
	int		base_len;

	n = (long) nb;
	base_len = ft_strlen (base);
	if (!base_len || ft_is_dup_char (base) || ft_is_forbidden_char (base))
		return ;
	if (n < 0)
	{
		n *= -1;
		ft_putchar ('-');
	}
	if (n < base_len)
		ft_putchar (base[n]);
	else
	{
		ft_putnbr_base (n / base_len, base);
		ft_putchar (base[n % base_len]);
	}
}
