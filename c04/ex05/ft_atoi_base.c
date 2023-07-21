/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	pos;
	int	base_len;

	n = 0;
	pos = 1;
	base_len = ft_strlen (base);
	if (!base_len || ft_is_dup_char (base) || ft_is_forbidden_char (base))
		return (0);
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
		n = (n * base_len) + ft_find_index (*str, base);
		str++ ;
	}
	return (n * pos);
}
