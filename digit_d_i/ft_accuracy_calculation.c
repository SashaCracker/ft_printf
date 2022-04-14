#include "ft_printf.h"

int	ft_accuracy_calculation(va_list ap, t_type *flag)
{
	int	accuracy;

	accuracy = 0;
	if (flag->dot > 0)
	{
		if (flag->star_accuracy > 0)
		{
			accuracy = va_arg(ap, int);
			if (accuracy < 0)
				flag->dot = 0;
		}
		else if (flag->accuracy > 0)
			accuracy = flag->accuracy;
		else
			accuracy = 0;
	}
	return (accuracy);
}
