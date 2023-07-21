/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_is_dup_char(char *arr);
int		ft_is_forbidden_char(char *arr);
int		ft_find_index(char c, char *str);
int		ft_atoi_base(char *str, char *base, int *n);
int		ft_putnbr_base(int nb, char *base, char *tab);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	char	*tab;

	(void) base_to;
	tab = (char *) malloc (sizeof (char) * 35);
	if (ft_atoi_base (nbr, base_from, &n) == -1
		|| ft_putnbr_base (n, base_to, tab) == -1)
	{		
		free (tab);
		return ((void *) 0);
	}
	return (tab);
}

int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*str)
		str++ ;
	return (str - s);
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

int	ft_find_index(char c, char *str)
{
	int	index;

	index = -1;
	while (str[++index])
	{
		if (str[index] == c)
			return (index);
	}
	return (-1);
}

void	ft_rev_str(char *str)
{
	int	size;
	int	index;
	int	temp;

	size = ft_strlen(str);
	index = -1;
	while (++index < (size / 2))
	{
		temp = str[index];
		str[index] = str[size - index -1];
		str[size - index -1] = temp;
	}
}

int	ft_atoi_base(char *str, char *base, int *n)
{
	int	pos;
	int	base_len;

	*n = 0;
	pos = 1;
	base_len = ft_strlen (base);
	if (!base_len || ft_is_dup_char (base) || ft_is_forbidden_char (base))
		return (-1);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			pos *= -1;
		str++ ;
	}
	while (ft_find_index (*str, base) != -1)
	{
		*n = (*n * base_len) + ft_find_index (*str, base);
		str++ ;
	}
	*n *= pos;
	return (0);
}

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
