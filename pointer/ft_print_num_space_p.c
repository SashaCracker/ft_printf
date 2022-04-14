#include "ft_printf.h"

int	ft_print_num_space_p(int space, unsigned long pointer, int result)
{
	write (1, "0", 1);
	write (1, "x", 1);
	result = result + 2;
	result = ft_putnbr16_p((unsigned long) pointer, result);
	result = ft_print_spase(space, result);
	return (result);
}
