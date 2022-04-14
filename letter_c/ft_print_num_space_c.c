#include "ft_printf.h"

int	ft_print_num_space_c(int space, char letter, int result)
{
	write(1, &letter, 1);
	result++;
	result = ft_print_spase(space, result);
	return (result);
}
