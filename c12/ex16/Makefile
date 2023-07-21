SRCS =  ../my_lib/lib.c \
		../ex06/ft_list_clear.c \
		../ex14/ft_list_sort.c \
		ft_sorted_list_insert.c \
		main.c

CC = cc
CFLAG = -Wall -Wextra -Werror

all:
	$(CC) $(CFLAG) $(SRCS) && ./a.out

clean:

fclean: clean
	rm -f *.out

re: fclean all
