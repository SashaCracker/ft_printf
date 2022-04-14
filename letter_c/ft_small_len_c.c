#include "ft_printf.h"

int	ft_small_len_c(char letter, t_type *flag, int width, int accuracy)
{
	int	zero;
	int	space;
	int	len;
	int	result;

	len = 1;
	result = 0;
	zero = accuracy - len;
	if ((len > width) || (len < accuracy))
		result = ft_print_minus_zero_num_c(zero, letter, result);
	else if ((len >= accuracy) || (len <= width))
	{
		space = width - len;
		if (flag->minus == 0)
		{
			if (flag->zero > 0)
				result = ft_print_minus_zero_num_c(space, letter, result);
			else
				result = ft_print_space_num_c(space, letter, result);
		}
		else
			result = ft_print_num_space_c(space, letter, result);
	}
	return (result);
}
