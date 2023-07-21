#ifndef FT_H
# define FT_H
# define TRUE 1
# define FALSE 0
# define ABSOLUTE(val) (val < 0 ? val *= -1 : val)

typedef int	t_bool;
void	ft_putstr(char *str);
void	ft_disp_stdin(void);
void	ft_disp_file(char *filename, int size);
void	ft_disp_file_err(char *argv, int err, char *filename);
int		ft_atoi(char *str);
t_bool	check_bad_option(char *argv);
t_bool	check_option_only(char *argv);
t_bool	check_bad_offset(char *argv, int *size);
t_bool	check_option_offset(char *argv);

# endif