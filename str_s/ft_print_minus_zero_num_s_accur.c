#include "ft_printf.h"

int	ft_print_minus_zero_num_s_accur(int space, char *str, int accuracy, int
result)
{
	result = ft_print_spase(space, result);
	result = ft_putstr_s(str, accuracy, result);
	return (result);
}
