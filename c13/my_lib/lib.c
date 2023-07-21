#include <stdio.h>
#include <stdlib.h>

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;

void    print_node(void *data)
{
	t_btree	*node;
	char	*str;

	node = (t_btree *) data;
	if (node)
	{
		str = (char *) node->item;
		printf ("%p\t%p\t%p\t%s\n", node->left, node, node->right, str);
	}
}

void	btree_foreach(t_btree *node, void (*f)(void *))
{
	while (node)
	{
		f(node);
		node = node->right;
	}
}

int		ft_strcmp(void *s1, void *s2)
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

int		intcpm(void *n1, void *n2)
{
	return (*((int *) n1) - *((int *) n2));
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

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	node = (t_btree *) malloc (sizeof (t_btree));
	if (node)
	{
		node->left = NULL;
		node->right = NULL;
		node->item = my_strdup ((char *) item);
	}
	return (node);
}

t_btree	*btree_create_node_int(void *item)
{
	t_btree	*node;
	int		*n;

	node = (t_btree *) malloc (sizeof (t_btree));
	n = (int *) malloc (sizeof (int));
	*n = *((int *) item);
	if (node)
	{
		node->left = NULL;
		node->right = NULL;
		node->item = n;
	}
	return (node);
}

void    print_node_int(void *data)
{
	t_btree	*node;
	int	*n;

	node = (t_btree *) data;
	if (node)
	{
		n = (int *) node->item;
		printf ("%14p\t%p\t%16p\t%d\n", node->left, node, node->right, *n);
	}
}

void    print_node_int2(void *data)
{
	printf ("%d, ", *((int *) data));
}

void	btree_insert_data (t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree	*current;

	if (!root || !*root || !item)
	{
		if (item && root)
			*root = btree_create_node(item);
		return ;
	}
	current = *root;
	if (cmpf(item, current->item) < 0)
	{
		if (current->left)
			btree_insert_data(&current->left, item, cmpf);
		else
			current->left = btree_create_node(item);
	}
	else
	{
		if (current->right)
			btree_insert_data(&current->right, item, cmpf);
		else
			current->right = btree_create_node(item);
	}
}
