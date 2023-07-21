/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int index;

	index = 0;
	while (tab[index + 1])
	{
		if (cmp(tab[index], tab[index + 1]) > 0)
		{
			ft_swap(&tab[index], &tab[index + 1]);
			if (index > 0)
			{
				--index;
				continue;
			}
		}
		++index;
	}
}
