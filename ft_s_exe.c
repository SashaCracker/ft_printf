#include "ft_printf.h"

static char	*ft_str_null(char *str)
{
	if (str == NULL)
	{
		str = malloc(sizeof(char) * 7);
		str[0] = '(';
		str[1] = 'n';
		str[2] = 'u';
		str[3] = 'l';
		str[4] = 'l';
		str[5] = ')';
		str[6] = '\0';
	}
	return (str);
}

int	ft_s_exe(char *s, va_list ap, t_type *flag, int result)
{
	int		width;
	int		accuracy;
	int		mark;
	char	*str;

	if (*s == 's')
	{
		mark = 0;
		width = ft_width_calculation(ap, flag);
		accuracy = ft_accuracy_calculation(ap, flag);
		str = va_arg (ap, char *);
		if (str == NULL)
			mark = 1;
		str = ft_str_null(str);
		if (flag->dot == 0)
			result = ft_without_dot_s(str, flag, width, accuracy) + result;
		else
			result = ft_with_dot_s(str, flag, width, accuracy) + result;
		if (mark == 1)
			free(str);
	}
	return (result);
}
