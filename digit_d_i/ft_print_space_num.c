#include "ft_printf.h"

int	ft_print_space_num(int space, int num, int result)
{
	result = ft_print_spase(space, result);
	result = ft_putnbr(num, result);
	return (result);
}
