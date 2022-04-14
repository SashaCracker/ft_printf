#include "ft_printf.h"

int	ft_print_space_num_u(int space, unsigned int num, int result)
{
	result = ft_print_spase(space, result);
	result = ft_putnbr_u(num, result);
	return (result);
}
