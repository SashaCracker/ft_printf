#include "ft_printf.h"

int	ft_print_minus_zero_num_c(int space, char letter, int result)
{
	result = ft_print_zero(space, result);
	write(1, &letter, 1);
	result++;
	return (result);
}
