#include "ft_printf.h"

int	ft_print_num_space_s_accur(int space, char *str, int accuracy, int result)
{
	result = ft_putstr_s(str, accuracy, result);
	result = ft_print_spase(space, result);
	return (result);
}
