#include "ft_printf.h"

int	ft_print_space_num_x(int space, unsigned int num, int result)
{
	result = ft_print_spase(space, result);
	result = ft_putnbr16(num, 'x', result);
	return (result);
}
