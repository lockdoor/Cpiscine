/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++ ;
		s2++ ;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort(int size, char **strs)
{
	int	index;

	index = 1;
	while (index < size - 1)
	{
		if (ft_strcmp (strs[index], strs[index + 1]) > 0)
		{
			ft_swap (&strs[index], &strs[index + 1]);
			if (index > 1)
			{
				--index ;
				continue ;
			}
		}
		++index;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	ft_sort (argc, argv);
	while (argv[++i])
		ft_putstr (argv[i]);
	return (0);
}

// cc -Wall -Wextra -Werror ft_sort_params.c && ./a.out banana water-melon apple grape orange durian | cat -e