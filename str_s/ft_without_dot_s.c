#include "ft_printf.h"

int	ft_without_dot_s(char *str, t_type *flag, int width, int len)
{
	int	space;
	int	result;

	result = 0;
	if (flag->dot == 0)
	{
		len = ft_strlen(str);
		space = width - len;
		if (flag->minus == 0)
		{
			if (flag->zero > 0)
				result = ft_print_minus_zero_num_s(space, str, result);
			else
				result = ft_print_space_num_s(space, str, result);
		}
		else
			result = ft_print_num_space_s(space, str, result);
	}
	return (result);
}
