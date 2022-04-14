#include "ft_printf.h"

static int	ft_flag(unsigned int nbr, t_type *flag, int accuracy, int width)
{
	int	result;
	int	len;

	result = 0;
	len = ft_putnbr16_len(nbr);
	if ((len >= width) && (len >= accuracy))
		result = ft_putnbr16(nbr, 'X', result);
	else
	{
		if (flag->dot == 0)
			result = ft_without_dot_xX(nbr, flag, width, len) + result;
		else
			result = ft_with_dot_xX(nbr, flag, width, accuracy) + result;
	}
	return (result);
}

int	ft_xX_exe(char *s, va_list ap, t_type *flag, int result)
{
	int				width;
	int				accuracy;
	unsigned int	nbr;

	if (*s == 'X')
	{
		width = ft_width_calculation(ap, flag);
		accuracy = ft_accuracy_calculation(ap, flag);
		nbr = va_arg(ap, unsigned int);
		if ((nbr == 0) && (flag->dot > 0) && (accuracy == 0))
		{
			result = ft_print_spase(width, result);
			return (result);
		}
		result = result + ft_flag(nbr, flag, accuracy, width);
	}
	return (result);
}
