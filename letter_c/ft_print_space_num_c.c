#include "ft_printf.h"

int	ft_print_space_num_c(int space, char letter, int result)
{
	result = ft_print_spase(space, result);
	write(1, &letter, 1);
	result++;
	return (result);
}
