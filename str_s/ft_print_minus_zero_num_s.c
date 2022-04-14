#include "ft_printf.h"

int	ft_print_minus_zero_num_s(int space, char *str, int result)
{
	result = ft_print_zero(space, result);
	result = ft_putstr(str, result);
	return (result);
}
