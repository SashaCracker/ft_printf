#include "ft_printf.h"

int	ft_big_len_s(char *str, t_type *flag, int width, int accuracy)
{
	int	space;
	int	len;
	int	result;

	result = 0;
	len = ft_strlen(str);
	space = width - len;
	if ((len < width) && (len < accuracy))
	{
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
