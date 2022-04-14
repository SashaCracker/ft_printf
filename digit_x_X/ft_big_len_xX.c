#include "ft_printf.h"

static int	ft_flag_minus(unsigned int num, t_type *flag, int zero, int space)
{
	int	result;

	result = 0;
	if (flag->minus == 0)
	{
		result = ft_print_spase(space, result);
		result = ft_print_minus_zero_num_xX(zero, num, result);
	}
	else
	{
		result = ft_print_minus_zero_num_xX(zero, num, result);
		result = ft_print_spase(space, result);
	}
	return (result);
}

int	ft_big_len_xX(unsigned int num, t_type *flag, int width, int accuracy)
{
	int	zero;
	int	space;
	int	len;
	int	result;

	result = 0;
	len = ft_putnbr16_len(num);
	zero = accuracy - len;
	space = width - accuracy;
	if ((len < width) && (len < accuracy))
	{
		if (width >= accuracy)
			result = result + ft_flag_minus(num, flag, zero, space);
		else
			result = ft_print_minus_zero_num_xX(zero, num, result);
	}
	return (result);
}
