#include "ft_printf.h"

int	ft_small_len_u(unsigned int num, t_type *flag, int width, int accuracy)
{
	int	zero;
	int	space;
	int	len;
	int	result;

	result = 0;
	len = ft_num_len_u(num);
	zero = accuracy - len;
	if ((len > width) || (len < accuracy))
		result = ft_print_minus_zero_num_u(zero, num, result);
	else if ((len > accuracy) || (len < width))
	{
		space = width - len;
		if (flag->minus == 0)
			result = ft_print_space_num_u(space, num, result);
		else
			result = ft_print_num_space_u(space, num, result);
	}
	return (result);
}
