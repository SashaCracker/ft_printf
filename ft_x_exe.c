#include "ft_printf.h"

static int	ft_flag(unsigned int num, t_type *flag, int accuracy, int width)
{
	int	result;
	int	len;

	result = 0;
	len = ft_putnbr16_len(num);
	if ((len >= width) && (len >= accuracy))
		result = ft_putnbr16(num, 'x', result);
	else
	{
		if (flag->dot == 0)
			result = ft_without_dot_x(num, flag, width, len) + result;
		else
			result = ft_with_dot_x(num, flag, width, accuracy) + result;
	}
	return (result);
}

int	ft_x_exe(char *s, va_list ap, t_type *flag, int result)
{
	int				width;
	int				accuracy;
	unsigned int	num;

	if (*s == 'x')
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
