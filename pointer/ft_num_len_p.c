#include "ft_printf.h"

int	ft_num_len_p(unsigned long c)
{
	int	i;

	i = 1;
	while (c /10 > 0)
	{
		i++;
		c = c /10;
	}
	return (i);
}
