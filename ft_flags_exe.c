#include "ft_printf.h"

static int	ft_star(char *s, t_type *flag, int i)
{
	if (*s == '*')
	{
		if (flag->dot == 0)
			flag->star_width = i;
		else
			flag->star_accuracy = i;
		i++;
	}
	return (i);
}

static int	ft_minus(char *s, t_type *flag, int i)
{
	if (*s == '-')
	{
		flag->minus = i;
		i++;
	}
	return (i);
}

static int	ft_digits(char *s, t_type *flag, int i)
{
	int	n;

	n = 10;
	if ((*s == '0') && (flag->zero == 0) && (flag->width == 0) && \
	(flag->accuracy == 0) && (flag->dot == 0))
	{
		flag->zero = i;
		i++;
	}
	if ((*s >= '0') && (*s <= '9'))
	{
		if (flag->dot > 0)
			flag->accuracy = (*s - '0') + flag->accuracy * n;
		else
			flag->width = (*s - '0') + flag->width * n;
	}
	return (i);
}

static int	ft_dot(char *s, t_type *flag, int i)
{
	if (*s == '.')
	{
		flag->dot = i;
		i++;
	}
	return (i);
}

t_type	ft_flag_exe(char *s, t_type *flag)
{
	int	i;

	i = 1;
	i = ft_star(s, flag, i);
	i = ft_minus(s, flag, i);
	i = ft_dot(s, flag, i);
	ft_digits(s, flag, i);
	return (*flag);
}
