NAME = ft_tail
SRC = srcs
SRCS = $(SRC)/ft_putstr.c $(SRC)/ft_disp_file.c $(SRC)/ft_disp_file_err.c \
		$(SRC)/ft_disp_stdin.c $(SRC)/main.c $(SRC)/check_param.c \
		$(SRC)/ft_atoi.c
# INCLUDE = includes
CC = cc
CFLAG = -Wall -Wextra -Werror

.c.o:
# $(CC) $(CFLAG) -I includes -c $< -o ${<:.c=.o}
	$(CC) $(CFLAG) -c $< -o ${<:.c=.o}

OBJS = $(SRCS:.c=.o)

all: $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)
# ar -rcs $(LIB) $(OBJS)

t:
	tail -c -10 test/text | cat -e
	./ft_tail -c -10 test/text | cat -e
	tail -c -10 test/text test/test2 | cat -e	
	./ft_tail -c -10 test/text test/test2 | cat -e
clean:
	rm -f $(SRC)/*.o *.o

fclean: clean
	rm -f $(NAME) *.out

re: fclean all

# ./ft_tail -c-10 text
# ./ft_tail -c-10 text test2
# ./ft_tail -c 10 text
# ./ft_tail -c 10 text test2
# ./ft_tail -c10 text
# ./ft_tail -c10 text test2