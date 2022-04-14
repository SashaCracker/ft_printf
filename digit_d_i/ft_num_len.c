#include "ft_printf.h"

int	ft_num_len(long int c)
{
	int	i;

	i = 1;
	if (c < 0)
	{
		c = c * (-1);
		i++;
	}
	while (c /10 > 0)
	{
		i++;
		c = c /10;
	}
	return (i);
}
