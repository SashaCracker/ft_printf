#include "ft_printf.h"

static int	ft_flag_minus(int result, int space, t_type *flag)
{
	if (flag->minus > 0)
	{
		write(1, "%", 1);
		result++;
		result = ft_print_spase(space, result);
	}
	else
	{
		if (flag->zero > 0)
		{
			result = ft_print_zero(space, result);
			write(1, "%", 1);
			result++;
		}
		else
		{
			result = ft_print_spase(space, result);
			write(1, "%", 1);
			result++;
		}
	}
	return (result);
}

int	ft_percent(char *s, int result, t_type *flag, va_list ap)
{
	int	width;
	int	space;
	int	accuracy;

	if (*s == '%')
	{
		width = ft_width_calculation(ap, flag);
		accuracy = ft_accuracy_calculation(ap, flag);
		if (accuracy < 0)
			accuracy = 0;
		space = width - 1;
		if ((width > 0) || (accuracy == 0))
			result = ft_flag_minus(result, space, flag);
		else
		{
			write(1, "%", 1);
			result++;
		}
	}
	return (result);
}
