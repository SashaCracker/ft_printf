#include "ft_printf.h"

int	ft_print_minus_zero_num_u(int space, unsigned int num, int result)
{
	result = ft_print_zero(space, result);
	result = ft_putnbr_u(num, result);
	return (result);
}
