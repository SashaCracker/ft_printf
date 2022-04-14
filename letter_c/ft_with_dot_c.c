#include "ft_printf.h"

int	ft_with_dot_c(char letter, t_type *flag, int width, int accuracy)
{
	int	len;
	int	result;

	len = 1;
	if ((len < width) && (len < accuracy))
		result = ft_big_len_c(letter, flag, width, accuracy);
	else
		result = ft_small_len_c(letter, flag, width, accuracy);
	return (result);
}
