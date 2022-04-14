#include "ft_printf.h"

static void	ft_upper(char *str)
{
	while (*str)
	{
		if ((*str >= 'a') && (*str <= 'f'))
			*str = *str - 32;
		else
			str++;
	}
}

static char	ft_str(char *str, int rest, int j)
{
	if (rest == 10)
		str[j] = 'a';
	else if (rest == 11)
		str[j] = 'b';
	else if (rest == 12)
		str[j] = 'c';
	else if (rest == 13)
		str[j] = 'd';
	else if (rest == 14)
		str[j] = 'e';
	else if (rest == 15)
		str[j] = 'f';
	else
		str[j] = (char)(rest + '0');
	return (str[j]);
}

static int	ft_zero_num(int result)
{
	write (1, "0", 1);
	result++;
	return (result);
}

static int	ft_write(int j, char *str, int result)
{
	while (j >= 1)
	{
		write (1, &str[j - 1], 1);
		j--;
		result++;
	}
	return (result);
}

int	ft_putnbr16(unsigned int c, char x, int result)
{
	char	*str;
	int		j;
	int		rest;

	if (c == 0)
		result = ft_zero_num(result);
	else
	{
		j = ft_num_len(c);
		str = malloc(sizeof(char) * j + 1);
		j = 0;
		while (c > 0)
		{
			rest = c % 16;
			str[j] = ft_str(str, rest, j);
			c = c / 16;
			j++;
		}
		str[j] = '\0';
		if (x == 'X')
			ft_upper(str);
		result = ft_write(j, str, result);
		free(str);
	}
	return (result);
}
