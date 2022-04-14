#include "ft_printf.h"

int	ft_width_calculation(va_list ap, t_type *flag)
{
	int	width;

	width = 0;
	if (flag->width > 0)
		width = flag->width;
	else if (flag->star_width > 0)
	{
		width = va_arg(ap, int);
		if (width < 0)
		{
			width = width * (-1);
			flag->minus = 1;
		}
	}
	return (width);
}
