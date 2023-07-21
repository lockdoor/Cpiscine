SRCS =  ../my_lib/lib.c \
		../ex06/ft_list_clear.c \
		../ex07/ft_list_at.c \
		../ex14/ft_list_sort.c \
		ft_list_reverse_fun.c \
		main.c

CC = cc
CFLAG = -Wall -Wextra -Werror

all:
	$(CC) $(CFLAG) $(SRCS) && ./a.out

clean:

fclean: clean
	rm -f *.out

re: fclean all
