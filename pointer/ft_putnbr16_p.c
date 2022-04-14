#include "ft_printf.h"
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

static int	ft_write(char *str, int j, int result)
{
	while (j >= 1)
	{
		write (1, &str[j - 1], 1);
		j--;
		result++;
	}
	return (result);
}

static int	ft_zero(int result)
{
	write(1, "0", 1);
	result++;
	return (result);
}

int	ft_putnbr16_p(unsigned long c, int result)
{
	char	*str;
	int		j;
	int		rest;

	if (c == 0)
		result = ft_zero(result);
	else
	{
		j = ft_num_len_p(c);
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
		result = ft_write(str, j, result);
		free(str);
	}
	return (result);
}
