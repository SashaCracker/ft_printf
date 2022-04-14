#include "ft_printf.h"

static int	ft_flag(unsigned int num, t_type *flag, int accuracy, int width)
{
	int	len;
	int	result;

	result = 0;
	len = ft_num_len_u(num);
	if ((len >= width) && (len >= accuracy))
		result = ft_putnbr_u(num, result);
	else
	{
		if (flag->dot == 0)
			result = ft_without_dot_u(num, flag, width, len) + result;
		else
			result = ft_with_dot_u(num, flag, width, accuracy) + result;
	}
	return (result);
}

int	ft_u_exe(char *s, va_list ap, t_type *flag, int result)
{
	int				width;
	int				accuracy;
	unsigned int	num;

	if (*s == 'u')
	{
		width = ft_width_calculation(ap, flag);
		accuracy = ft_accuracy_calculation(ap, flag);
		num = va_arg(ap, unsigned int);
		if ((num == 0) && (flag->dot > 0) && (accuracy == 0))
		{
			result = ft_print_spase(width, result);
			return (result);
		}
		result = result + ft_flag(num, flag, accuracy, width);
	}
	return (result);
}
