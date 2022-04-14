#include "ft_printf.h"

static int	ft_len_calculation(int num, int accuracy)
{
	int		len;

	len = ft_num_len(num);
	if ((num < 0) && (len == accuracy))
		len--;
	return (len);
}

static int	ft_flag(int num, int width, int accuracy, t_type *flag)
{
	int	result;
	int	len;

	result = 0;
	len = ft_len_calculation(num, accuracy);
	if ((len >= width) && (len >= accuracy))
		result = ft_putnbr(num, result);
	else
	{
		if (flag->dot == 0)
			result = ft_without_dot(num, flag, width, len) + result;
		else
			result = ft_with_dot(num, flag, width, accuracy) + result;
	}
	return (result);
}

int	ft_d_i_exe(char *s, va_list ap, t_type *flag, int result)
{
	int	width;
	int	accuracy;
	int	num;

	if ((*s == 'd') || (*s == 'i'))
	{
		width = ft_width_calculation(ap, flag);
		accuracy = ft_accuracy_calculation(ap, flag);
		num = va_arg(ap, int);
		if ((num == 0) && (flag->dot > 0) && (accuracy == 0))
		{
			result = ft_print_spase(width, result);
			return (result);
		}
		result = result + ft_flag(num, width, accuracy, flag);
	}
	return (result);
}
