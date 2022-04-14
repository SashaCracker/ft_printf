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

int	ft_putnbr16_len(unsigned int c)
{
	char	*str;
	int		j;
	int		rest;
	int		len;

	j = ft_num_len(c);
	str = malloc(sizeof(char) * j + 1);
	j = 0;
	if (c == 0)
	{
		str[0] = '0';
		j++;
	}
	while (c > 0)
	{
		rest = c % 16;
		str[j] = ft_str(str, rest, j);
		c = c / 16;
		j++;
	}
	str[j] = '\0';
	len = ft_strlen(str);
	free(str);
	return (len);
}
