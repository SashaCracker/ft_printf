#include "ft_printf.h"

int	ft_print_minus_zero_num(int space, int num, int result)
{
	if (num < 0)
	{
		num = ft_negative_num(num);
		result++;
	}
	result = ft_print_zero(space, result);
	if (num == -2147483648)
	{
		write(1, "2", 1);
		result++;
		num = 147483648;
	}
	result = ft_putnbr(num, result);
	return (result);
}
