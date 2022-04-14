#include "ft_printf.h"

static int	ft_razryad(unsigned int n)
{
	int	d;

	d = 1;
	while ((n / 10) != 0)
	{
		d++;
		n = n / 10;
	}
	return (d);
}

static int	ft_ten_power(unsigned int n)
{
	int	power;

	power = 1;
	n = n - 1;
	while (n > 0)
	{
		power = power * 10 ;
		n--;
	}
	if (power == 1)
		power = 10;
	return (power);
}

int	ft_putnbr_u(unsigned int n, int result)
{
	char	k;
	int		razr;

	razr = ft_razryad(n);
	while (razr > 0)
	{
		if (razr == 1)
			k = n + 48;
		else
		{
			k = (n / ft_ten_power(razr)) + 48;
			n = n % ft_ten_power(razr);
		}
		write(1, &k, 1);
		result++;
		razr--;
	}
	return (result);
}
