SRCS =  ../my_lib/lib.c \
		btree_create_node.c \
		main.c

CC = cc
CFLAG = -Wall -Wextra -Werror

all:
	$(CC) $(CFLAG) $(SRCS) && ./a.out

clean:

fclean: clean
	rm -f *.out

re: fclean all
