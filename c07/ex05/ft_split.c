/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	count;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		count = 0;
		while (*(str + count) == *(to_find + count))
		{
			++count ;
			if (*(to_find + count) == '\0')
				return (str);
		}
		str++ ;
	}
	return ((void *) 0);
}

int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*str)
		str++ ;
	return (str - s);
}

int	count_word(char *str, char *charset)
{
	char	*sep_end;
	int		w;
	int		sep_len;

	w = 0;
	sep_len = ft_strlen (charset);
	while (str)
	{
		str = ft_strstr (str, charset);
		if (str)
		{
			while (str == ft_strstr (str, charset))
				str += sep_len;
			sep_end = ft_strstr (str, charset);
			if (sep_end)
				w++ ;
			else
				break ;
		}
	}
	return (w);
}

void	word(char *str, char *charset, char **tab, int sep_len)
{
	int		i;
	char	*sep_end;
	int		j;

	i = -1;
	while (str)
	{
		str = ft_strstr (str, charset);
		if (str)
			while (str == ft_strstr (str, charset))
				str += sep_len;
		sep_end = ft_strstr (str, charset);
		if (sep_end)
		{
			tab[++i] = (char *) malloc ((int)(sep_end - str));
			j = -1;
			while (++j < (int)(sep_end - str))
				tab[i][j] = str[j];
			tab[i][j] = '\0';
		}
		else
			break ;
	}
	tab[++i] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		size;
	int		sep_len;

	sep_len = ft_strlen(charset);
	size = count_word (str, charset) + 1;
	tab = (char **) malloc (sizeof (char *) * size);
	word(str, charset, tab, sep_len);
	return (tab);
}
