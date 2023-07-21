SRC_DIR = srcs
# OBJ_DIR = bin
SRCS =  $(SRC_DIR)/ft_addr_hex.c \
		$(SRC_DIR)/ft_disp_file_err.c \
		$(SRC_DIR)/ft_file_size.c \
		$(SRC_DIR)/ft_find_index.c \
		$(SRC_DIR)/ft_hexdump_o_C.c \
		$(SRC_DIR)/ft_is_dup_char.c \
		$(SRC_DIR)/ft_is_forbidden_char.c \
		$(SRC_DIR)/ft_putchar.c \
		$(SRC_DIR)/ft_putnbr_base.c \
		$(SRC_DIR)/ft_putstr.c \
		$(SRC_DIR)/ft_rev_str.c \
		$(SRC_DIR)/ft_stdin.c \
		$(SRC_DIR)/ft_strlen.c \
		$(SRC_DIR)/main.c 
PROG_NAME = ft_hexdump
CC = cc
CFLAG = -Wall -Wextrq -Werror
.c.o:
# $(CC) $(CFLAG) -c $< -o ${<:.c=.o}
	$(CC) $(CFLAG) -c $< -o ${<:.c=.o}

OBJS = $(SRCS:.c=.o)

all: $(OBJS)
	$(CC) $(CFLAG) -o $(PROG_NAME) $(OBJS)

t:
#./$(PROG_NAME) -C test/text1 test/text2 test/text3
	hexdump test/text1 test/text2t test/text3 | cat -e
	./$(PROG_NAME) test/text1 test/text2t test/text3 | cat -e
	hexdump -C test/text1 test/text2t test/text3 | cat -e
	./$(PROG_NAME) -C test/text1 test/text2t test/text3 | cat -e

clean:
# rm -f $(OBJ_DIR)/*.o
	rm -f $(SRC_DIR)/*.o

fclean: clean
	rm -f $(PROG_NAME) *.out

re: fclean all

# hexdump -c test/text1
# ./$(PROG_NAME) -c -10 test/text1
# hexdump -c test/text1 test/text2	
# ./$(PROG_NAME) -c -10 test/text1 test/text2

# hexdump test/text1 test/text2t test/text3 | cat -e
# ./$(PROG_NAME) test/text1 test/text2t test/text3 | cat -e
# ./$(PROG_NAME) -cn
# ./$(PROG_NAME) -
# ./$(PROG_NAME) -c
#hexdump "0123456789abcdef"
#echo "0123456789abcdef"|hexdump

#hexdump -C test/text1 test/text2t test/text3 -e