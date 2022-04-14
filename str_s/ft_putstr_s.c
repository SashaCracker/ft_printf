#include "ft_printf.h"

int	ft_putstr_s(char *str, int accuracy, int result)
{
	while (*str)
	{
		if (accuracy != 0)
		{
			write(1, str, 1);
			accuracy --;
			result++;
		}
		str++;
	}
	return (result);
}
