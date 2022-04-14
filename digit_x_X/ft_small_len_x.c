#include "ft_printf.h"

int	ft_small_len_x(unsigned int num, t_type *flag, int width, int accuracy)
{
	int	zero;
	int	space;
	int	len;
	int	result;

	result = 0;
	len = ft_putnbr16_len(num);
	zero = accuracy - len;
	if ((len > width) || (len < accuracy))
		result = ft_print_minus_zero_num_x(zero, num, result);
	else if ((len > accuracy) || (len < width))
	{
		space = width - len;
		if (flag->minus == 0)
			result = ft_print_space_num_x(space, num, result);
		else
			result = ft_print_num_space_x(space, num, result);
	}
	return (result);
}
