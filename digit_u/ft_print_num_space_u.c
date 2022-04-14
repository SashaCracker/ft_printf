#include "ft_printf.h"

int	ft_print_num_space_u(int space, unsigned int num, int result)
{
	result = ft_putnbr_u(num, result);
	result = ft_print_spase(space, result);
	return (result);
}
