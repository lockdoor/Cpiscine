/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by pnamnil           #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    struct s_list   *next;
    void            *data;
}   t_list;

void	my_list_foreach(t_list *list, void(*f)(void *))
{
	while (list)
	{
		f(list);
		list = list->next;
	}
}

void	my_print_list_char(void *data)
{
	char	*str;
	t_list	*elem;

	elem = (t_list *) data;
	str = (char *) elem->data;
	if (elem)
		printf ("%p\t%10s\t%p\n", elem, str, elem->next);
}

void	my_print_list_int(void *data)
{
	int	*nb;
	t_list	*elem;

	elem = (t_list *) data;
	nb = (int *) elem->data;
	if (elem)	
		printf ("%p\t%d\t%p\n", elem, *nb, elem->next);
}

char	*my_strdup(char *str)
{
	char	*tmp;
	char	*cpy;

	tmp = str;
	while (*tmp)
		tmp++ ;
	cpy = (char *) malloc (sizeof (char) * (tmp - str + 1));
	tmp = cpy;
	while (*str)
		*tmp++ = *str++;
	return (cpy);
}

t_list	*my_ft_create_elem_int(void *data)
{
	t_list	*elem;
	int		*nbr;
	nbr = (int *) malloc (sizeof (int));	
	elem = (t_list *) malloc (sizeof (t_list));
	if (!elem || !nbr)
		return (NULL);
	*nbr = *((int *) data);
	elem->data = nbr;
	elem->next = NULL;
	return (elem);
}

t_list	*my_ft_create_elem_char(void *data)
{
	t_list	*elem;
	
	elem = (t_list *) malloc (sizeof (t_list));
	if (!elem)
		return (NULL);	
	elem->data = my_strdup((char *) data);
	elem->next = NULL;
	return (elem);
}

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;
	
	elem = (t_list *) malloc (sizeof (t_list));
	if (!elem)
		return (NULL);	
	elem->data = my_strdup((char *) data);
	elem->next = NULL;
	return (elem);
}

void	my_list_push_front(t_list **begin_list, void *data, t_list *(*f)(void *))
{
	t_list	*elem;

	elem = f (data);
	if (*begin_list)
		elem->next = *begin_list;
	*begin_list = elem;
}

t_list	*my_list_push_strs(int size, char **strs)
{
	int	i;
	t_list	*elem;
	t_list	*tmp;

	i = -1;
	elem = (void *) 0;
	while (++i < size && strs[i])
	{
		if (!elem)
			elem = my_ft_create_elem_char(strs[i]);
		else
		{
			tmp = elem;
			elem = my_ft_create_elem_char(strs[i]);
			elem->next = tmp;
		}
	}
	return (elem);
}

int	ft_strcmp(void *s1, void *s2)
{
	char	*a;
	char	*b;

	a = (char *) s1;
	b = (char *) s2;
	while (*a && *a == *b)
	{
		a++ ;
		b++ ;
	}
	return (*a - *b);
}

void my_print_list_data (void *data)
{
	char	*str;
	str = (char *) data;
	printf ("%s\n", str);
}
