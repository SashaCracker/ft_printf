#include "ft_printf.h"

int	ft_small_len_s(char *str, t_type *flag, int width, int accuracy)
{
	int	space;
	int	result;

	result = 0;
	space = width - accuracy;
	if (flag->minus == 0)
	{
		if (flag->zero > 0)
			result = ft_print_minus_zero_num_s_accur(space, str, accuracy, \
			result);
		else
			result = ft_print_space_num_s_accur(space, str, accuracy, result);
	}
	else
		result = ft_print_num_space_s_accur(space, str, accuracy, result);
	return (result);
}
