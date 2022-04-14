#include "ft_printf.h"

int	ft_print_minus_zero_num_x(int space, unsigned int num, int result)
{
	result = ft_print_zero(space, result);
	result = ft_putnbr16(num, 'x', result);
	return (result);
}
