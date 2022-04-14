#include "ft_printf.h"

int	ft_print_num_space_s(int space, char *str, int result)
{
	result = ft_putstr(str, result);
	result = ft_print_spase(space, result);
	return (result);
}
