#include "ft_printf.h"

int	ft_putstr(char *str, int result)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
		result++;
	}
	return (result);
}
