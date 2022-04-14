#include "ft_printf.h"

int	ft_with_dot(int num, t_type *flag, int width, int accuracy)
{
	int	len;
	int	result;

	len = ft_num_len(num);
	if (num < 0)
		len = len - 1;
	if ((len < width) && (len < accuracy))
		result = ft_big_len(num, flag, width, accuracy);
	else
		result = ft_small_len(num, flag, width, accuracy);
	return (result);
}
