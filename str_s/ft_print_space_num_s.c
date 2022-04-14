#include "ft_printf.h"

int	ft_print_space_num_s(int space, char *str, int result)
{
	result = ft_print_spase(space, result);
	result = ft_putstr(str, result);
	return (result);
}
