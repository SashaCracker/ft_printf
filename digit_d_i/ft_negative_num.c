#include "ft_printf.h"

int	ft_negative_num(int num)
{
	if (num < 0)
	{
		write(1, "-", 1);
		num = num * (-1);
	}
	return (num);
}
