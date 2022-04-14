#include "ft_printf.h"

int	ft_print_zero(int space, int result)
{
	while (space > 0)
	{
		write(1, "0", 1);
		space--;
		result++;
	}
	return (result);
}
