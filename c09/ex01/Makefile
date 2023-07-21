LIB = libft.a
SRC_DIR = srcs
SRC = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_swap.c $(SRC_DIR)/ft_putstr.c \
		$(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_strcmp.c
INCLUDE = includes
CC = cc
CFLAG = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

OBJS = ${SRC:.c=.o}

all: $(OBJS)
	ar -rcs $(LIB) $(OBJS)

clean:
	rm -f $(SRC_DIR)/*.o *.o

fclean: clean
	rm -f $(LIB) *.out

re: fclean all