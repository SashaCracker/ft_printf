#include "ft_printf.h"

static int	ft_ox(int result)
{
	write(1, "0", 1);
	write(1, "x", 1);
	result = result + 2;
	return (result);
}

static int	ft_width_not_zero(int width, int result, t_type *flag)
{
	int	space;

	if (flag->minus == 0)
	{
		space = width - 2;
		result = ft_print_spase(space, result);
		write(1, "0", 1);
		write(1, "x", 1);
		result = result + 2;
	}
	else
	{
		write(1, "0", 1);
		write(1, "x", 1);
		result = result + 2;
		space = width - 2;
		result = ft_print_spase(space, result);
	}
	return (result);
}

static int	ft_flag(t_type *flag, int width, int accuracy, unsigned long
pointer)
{
	int	len;
	int	result;

	result = 0;
	len = ft_putnbr16_len_p(pointer);
	if ((len >= width) && (len >= accuracy))
		result = ft_print_space_num_p(0, pointer, result);
	else
	{
		if (flag->dot == 0)
			result = ft_without_dot_p(pointer, flag, width, len) + result;
		else
			result = ft_with_dot_p(pointer, flag, width, accuracy) + result;
	}
	return (result);
}

int	ft_p_exe(char *s, va_list ap, t_type *flag, int result)
{
	int				width;
	int				accuracy;
	unsigned long	pointer;

	if (*s == 'p')
	{
		width = ft_width_calculation(ap, flag);
		accuracy = ft_accuracy_calculation(ap, flag);
		pointer = va_arg(ap, unsigned long);
		if ((pointer == 0) && (flag->dot > 0) && (accuracy == 0))
		{
			if (width == 0)
				result = ft_ox(result);
			else
				result = ft_width_not_zero(width, result, flag);
			return (result);
		}
		result = result + ft_flag(flag, width, accuracy, pointer);
	}
	return (result);
}
