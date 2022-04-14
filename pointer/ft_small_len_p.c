#include "ft_printf.h"

int	ft_small_len_p(unsigned long pointer, t_type *flag, int width, int
accuracy)
{
	int	zero;
	int	space;
	int	len;
	int	result;

	result = 0;
	len = ft_putnbr16_len_p(pointer);
	zero = accuracy - len;
	if ((len > width) || (len < accuracy))
		result = ft_print_minus_zero_num_p(zero, pointer, result);
	else if ((len > accuracy) || (len < width))
	{
		space = width - len - 2;
		if (flag->minus == 0)
			result = ft_print_space_num_p(space, pointer, result);
		else
			result = ft_print_num_space_p(space, pointer, result);
	}
	return (result);
}
