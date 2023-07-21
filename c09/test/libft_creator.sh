cc -Wall -Werror -Wextra -c ft_putstr.c
ar rc libft.a *.o
rm -f *.o
cc -Wall -Werror -Wextra main.c libft.a && ./a.out