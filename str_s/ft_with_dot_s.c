#include "ft_printf.h"

int	ft_with_dot_s(char *str, t_type *flag, int width, int accuracy)
{
	int	len;
	int	result;

	len = ft_strlen(str);
	if ((len < width) && (len < accuracy))
		result = ft_big_len_s(str, flag, width, accuracy);
	else
		result = ft_small_len_s(str, flag, width, accuracy);
	return (result);
}
