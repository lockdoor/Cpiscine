#ifndef FT_H
# define FT_H
# define BASE16 "0123456789abcdef"
# define PROG_NAME "./ft_hexdump"

#include <stdlib.h>
#include <stdio.h>

void	ft_stdin_no_param(void);
void	ft_stdin_no_option(int argc, char **argv);
void	hexdump_o_C(int argc, char **argv);
void	ft_addr_hex(int addr, int size);
size_t	ft_file_size(char **files, int index, int length, char **str);
void	ft_disp_file_err(char *argv, int err, char *filename);
int		ft_strlen(char *base);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_rev_str(char *str);
int		ft_strlen(char *base);
int		ft_is_dup_char(char *arr);
int		ft_is_forbidden_char(char *arr);
int		ft_putnbr_base(int nb, char *base, char *tab);
// int		ft_find_index(char c, char *str);
// int		ft_atoi_base(char *str, char *base);

#endif