#include "ft_printf.h"

static int	ft_flag_minus(int num, t_type *flag, int result, int space)
{
	if (flag->minus == 0)
		result = ft_print_space_num(space, num, result);
	else
	{
		if (num != -2147483648)
		{
			if (num < 0)
				result++;
			num = ft_negative_num(num);
		}
		result = ft_print_num_space(space, num, result);
	}
	return (result);
}

int	ft_small_len(int num, t_type *flag, int width, int accuracy)
{
	int	zero;
	int	space;
	int	len;
	int	result;

	result = 0;
	len = ft_num_len(num);
	if (num < 0)
		len = len - 1;
	zero = accuracy - len;
	if ((len > width) || (len < accuracy))
		result = ft_print_minus_zero_num(zero, num, result);
	else if ((len > accuracy) || (len < width))
	{
		space = width - len;
		if (num < 0)
			space = space - 1;
		result = ft_flag_minus(num, flag, result, space);
	}
	return (result);
}
