#include "ft_printf.h"

static int	ft_len_calculation(int num)
{
	int		len;

	len = ft_num_len(num);
	if (num < 0)
		len = len - 1;
	return (len);
}

static int	ft_space_calculation(int num, int width, int accuracy)
{
	int		space;

	space = width - accuracy;
	if (num < 0)
		space = space - 1;
	return (space);
}

int	ft_big_len(int num, t_type *flag, int width, int accuracy)
{
	int	zero;
	int	space;
	int	len;
	int	result;

	result = 0;
	len = ft_len_calculation(num);
	zero = accuracy - len;
	space = ft_space_calculation(num, width, accuracy);
	if (width >= accuracy)
	{
		if (flag->minus == 0)
		{
			result = ft_print_spase(space, result);
			result = ft_print_minus_zero_num(zero, num, result);
		}
		else
		{
			result = ft_print_minus_zero_num(zero, num, result);
			result = ft_print_spase(space, result);
		}
	}
	else
		result = ft_print_minus_zero_num(zero, num, result);
	return (result);
}
