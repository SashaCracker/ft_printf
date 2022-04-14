#include "ft_printf.h"

int	ft_print_num_space_xX(int space, unsigned int num, int result)
{
	result = ft_putnbr16(num, 'X', result);
	result = ft_print_spase(space, result);
	return (result);
}
