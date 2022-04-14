#include "ft_printf.h"

static int	ft_write(char *s, int result)
{
	write(1, s, 1);
	result++;
	return (result);
}

static char	*ft_str(char *s, t_type *flag)
{
	while ((*s != 'd') && (*s != 'i') && (*s != 'u') && (*s != 's') \
			&& (*s != 'c') && (*s != 'x') && (*s != 'X') && (*s != 'p') \
			&& (*s != '\0') && (*s != '%'))
	{
		*flag = ft_flag_exe(s, flag);
		s++;
	}
	return (s);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	char	*s;
	t_type	flag;
	int		result;

	s = (char *)str;
	result = 0;
	va_start(ap, str);
	while (*s)
	{
		flag = ft_struct_initialization(&flag);
		if (*s == '%')
		{
			s++;
			s = ft_str(s, &flag);
			if (*s == '\0')
				return (result);
			result = ft_types(s, ap, &flag, result);
		}
		else
			result = ft_write(s, result);
		s++;
	}
	va_end(ap);
	return (result);
}
