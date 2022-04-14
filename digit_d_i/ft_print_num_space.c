#include "ft_printf.h"

int	ft_print_num_space(int space, int num, int result)
{
	result = ft_putnbr(num, result);
	result = ft_print_spase(space, result);
	return (result);
}
