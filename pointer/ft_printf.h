#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_type
{
	int	width;
	int	zero;
	int	accuracy;
	int	minus;
	int	star_width;
	int	star_accuracy;
	int	dot;
}				t_type;

int		ft_printf(const char *str, ...);
int		ft_putnbr16(unsigned int c, char x, int result);
int		ft_putnbr(long int n, int result);
int		ft_putstr(char *str, int result);
int		ft_strlen(char *str);
int		ft_d_i_exe(char *s, va_list ap, t_type *flag, int result);
int		ft_u_exe(char *s, va_list ap, t_type *flag, int result);
int		ft_s_exe(char *s, va_list ap, t_type *flag, int result);
int		ft_c_exe(char *s, va_list ap, t_type *flag, int result);
int		ft_x_exe(char *s, va_list ap, t_type *flag, int result);
int		ft_xX_exe(char *s, va_list ap, t_type *flag, int result);
int		ft_p_exe(char *s, va_list ap, t_type *flag, int result);
t_type	ft_flag_exe(char *s, t_type *flag);
int		ft_num_len(long int c);
t_type	ft_struct_initialization(t_type *flag);
int		ft_width_calculation(va_list ap, t_type *flag);
int		ft_accuracy_calculation(va_list ap, t_type *flag);
int		ft_with_dot(int num, t_type *flag, int width, int accuracy);
int		ft_small_len(int num, t_type *flag, int width, int accuracy);
int		ft_big_len(int num, t_type *flag, int width, int accuracy);
int		ft_without_dot(int num, t_type *flag, int width, int len);
int		ft_print_minus_zero_num(int space, int num, int result);
int		ft_print_num_space(int space, int num, int result);
int		ft_print_space_num(int space, int num, int result);
int		ft_print_spase(int space, int result);
int		ft_negative_num(int num);
int		ft_print_zero(int space, int result);
int		ft_big_len_u(unsigned int num, t_type *flag, int width, int accuracy);
int		ft_num_len_u(unsigned int c);
int		ft_print_minus_zero_num_u(int space, unsigned int num, int result);
int		ft_print_num_space_u(int space, unsigned int num, int result);
int		ft_print_space_num_u(int space, unsigned int num, int result);
int		ft_putnbr_u(unsigned int n, int result);
int		ft_small_len_u(unsigned int num, t_type *flag, int width, int accuracy);
int		ft_with_dot_u(unsigned int num, t_type *flag, int width, int accuracy);
int		ft_without_dot_u(unsigned int num, t_type *flag, int width, int len);
int		ft_big_len_c(char letter, t_type *flag, int width, int accuracy);
int		ft_print_minus_zero_num_c(int space, char letter, int result);
int		ft_print_num_space_c(int space, char letter, int result);
int		ft_print_space_num_c(int space, char letter, int result);
int		ft_small_len_c(char letter, t_type *flag, int width, int accuracy);
int		ft_with_dot_c(char letter, t_type *flag, int width, int accuracy);
int		ft_without_dot_c(char letter, t_type *flag, int width, int len);
int		ft_big_len_s(char *str, t_type *flag, int width, int accuracy);
int		ft_print_minus_zero_num_s(int space, char *str, int result);
int		ft_print_num_space_s(int space, char *str, int result);
int		ft_print_space_num_s(int space, char *str, int result);
int		ft_print_minus_zero_num_s_accur(int space, char *str, int accuracy, \
int result);
int		ft_print_num_space_s_accur(int space, char *str, int accuracy, \
int result);
int		ft_print_space_num_s_accur(int space, char *str, int accuracy, \
int result);
int		ft_small_len_s(char *str, t_type *flag, int width, int accuracy);
int		ft_with_dot_s(char *str, t_type *flag, int width, int accuracy);
int		ft_without_dot_s(char *str, t_type *flag, int width, int len);
int		ft_putstr_s(char *str, int accuracy, int result);
int		ft_print_minus_zero_num_x(int space, unsigned int num, int result);
int		ft_print_minus_zero_num_xX(int space, unsigned int num, int result);
int		ft_print_num_space_x(int space, unsigned int num, int result);
int		ft_print_num_space_xX(int space, unsigned int num, int result);
int		ft_print_space_num_x(int space, unsigned int num, int result);
int		ft_print_space_num_xX(int space, unsigned int num, int result);
int		ft_without_dot_x(unsigned int num, t_type *flag, int width, int len);
int		ft_with_dot_x(unsigned int num, t_type *flag, int width, int accuracy);
int		ft_small_len_x(unsigned int num, t_type *flag, int width, int accuracy);
int		ft_big_len_x(unsigned int num, t_type *flag, int width, int accuracy);
int		ft_putnbr16_len(unsigned int c);
int		ft_without_dot_xX(unsigned int num, t_type *flag, int width, int len);
int		ft_with_dot_xX(unsigned int num, t_type *flag, int width, int accuracy);
int		ft_big_len_xX(unsigned int num, t_type *flag, int width, int accuracy);
int		ft_small_len_xX(unsigned int num, t_type *flag, int width, \
int accuracy);
int		ft_big_len_p(unsigned long pointer, t_type *flag, int width, \
int accuracy);
int		ft_print_minus_zero_num_p(int space, unsigned long pointer, int result);
int		ft_print_num_space_p(int space, unsigned long pointer, int result);
int		ft_print_space_num_p(int space, unsigned long pointer, int result);
int		ft_small_len_p(unsigned long pointer, t_type *flag, int width, \
int accuracy);
int		ft_with_dot_p(unsigned long pointer, t_type *flag, int width, \
int accuracy);
int		ft_without_dot_p(unsigned long pointer, t_type *flag, int width, \
int len);
int		ft_putnbr16_p(unsigned long c, int result);
int		ft_putnbr16_len_p(unsigned long c);
int		ft_num_len_p(unsigned long c);
int		ft_percent(char *s, int result, t_type *flag, va_list ap);
int		ft_types(char *s, va_list ap, t_type *flag, int result);

#endif