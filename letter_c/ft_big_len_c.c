#include "ft_printf.h"

static int	ft_flag_minus(char letter, t_type *flag, int zero, int space)
{
	int	result;

	result = 0;
	if (flag->minus == 0)
	{
		result = ft_print_spase(space, result);
		result = ft_print_minus_zero_num_c(zero, letter, result);
	}
	else
	{
		result = ft_print_minus_zero_num_c(zero, letter, result);
		result = ft_print_spase(space, result);
	}
	return (result);
}

int	ft_big_len_c(char letter, t_type *flag, int width, int accuracy)
{
	int	zero;
	int	space;
	int	len;
	int	result;

	len = 1;
	result = 0;
	zero = accuracy - len;
	space = width - accuracy;
	if ((len < width) && (len < accuracy))
	{
		if (width >= accuracy)
			result = result + ft_flag_minus(letter, flag, zero, space);
		else
			result = ft_print_minus_zero_num_c(zero, letter, result);
	}
	return (result);
}
