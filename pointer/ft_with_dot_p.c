#include "ft_printf.h"

int	ft_with_dot_p(unsigned long pointer, t_type *flag, int width, int
accuracy)
{
	int	len;
	int	result;

	len = ft_putnbr16_len_p(pointer);
	if ((len < width) && (len < accuracy))
		result = ft_big_len_p(pointer, flag, width, accuracy);
	else
		result = ft_small_len_p(pointer, flag, width, accuracy);
	return (result);
}
