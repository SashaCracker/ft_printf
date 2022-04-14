#include "ft_printf.h"

int	ft_print_num_space_x(int space, unsigned int num, int result)
{
	result = ft_putnbr16(num, 'x', result);
	result = ft_print_spase(space, result);
	return (result);
}
