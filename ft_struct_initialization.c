#include "ft_printf.h"

t_type	ft_struct_initialization(t_type *flag)
{
	flag->width = 0;
	flag->zero = 0;
	flag->accuracy = 0;
	flag->minus = 0;
	flag->star_width = 0;
	flag->star_accuracy = 0;
	flag->dot = 0;
	return (*flag);
}
