NAME = ft_cat
SRC = srcs
SRCS = $(SRC)/ft_putstr.c $(SRC)/ft_disp_file.c $(SRC)/ft_disp_file_err.c \
		$(SRC)/ft_disp_stdin.c $(SRC)/main.c
# INCLUDE = includes
CC = cc
CFLAG = -Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -I includes -c $< -o ${<:.c=.o}

OBJS = $(SRCS:.c=.o)

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
# ar -rcs $(LIB) $(OBJS)

clean:
	rm -f $(SRC)/*.o *.o

fclean: clean
	rm -f $(NAME) *.out

re: fclean all