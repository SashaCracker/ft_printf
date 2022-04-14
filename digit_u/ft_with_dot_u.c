#include "ft_printf.h"

int	ft_with_dot_u(unsigned int num, t_type *flag, int width, int accuracy)
{
	int	len;
	int	result;

	len = ft_num_len_u(num);
	if ((len < width) && (len < accuracy))
		result = ft_big_len_u(num, flag, width, accuracy);
	else
		result = ft_small_len_u(num, flag, width, accuracy);
	return (result);
}
