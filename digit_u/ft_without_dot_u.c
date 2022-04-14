#include "ft_printf.h"

int	ft_without_dot_u(unsigned int num, t_type *flag, int width, int len)
{
	int	space;
	int	result;

	result = 0;
	if (flag->dot == 0)
	{
		space = width - len;
		if (flag->minus == 0)
		{
			if (flag->zero > 0)
				result = ft_print_minus_zero_num_u(space, num, result);
			else
				result = ft_print_space_num_u(space, num, result);
		}
		else
			result = ft_print_num_space_u(space, num, result);
	}
	return (result);
}
