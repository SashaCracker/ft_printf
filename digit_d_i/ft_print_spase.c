#include "ft_printf.h"

int	ft_print_spase(int space, int result)
{
	while (space > 0)
	{
		write(1, " ", 1);
		space--;
		result++;
	}
	return (result);
}
