#include "ft_printf.h"

int	ft_c_exe(char *s, va_list ap, t_type *flag, int result)
{
	int		len;
	int		width;
	char	letter;

	if (*s == 'c')
	{
		width = ft_width_calculation(ap, flag);
		letter = (char) va_arg(ap, int);
		len = 1;
		if (flag->dot == 0)
			result = ft_without_dot_c(letter, flag, width, len) + result;
		else
			result = ft_with_dot_c(letter, flag, width, len) + result;
	}
	return (result);
}
