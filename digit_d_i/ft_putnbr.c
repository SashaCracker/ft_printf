#include "ft_printf.h"

static int	ft_razryad(long int n)
{
	int	d;

	d = 1;
	if ((n >= -2147483647) && (n < 0))
		n = n * (-1);
	while ((n / 10) != 0)
	{
		d++;
		n = n / 10;
	}
	return (d);
}

static int	ft_ten_power(long int n)
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

static long int	ft_otric_num(long int n)
{
	if (n < 0)
	{
		n = n * (-1);
		write(1, "-", 1);
	}
	return (n);
}

static int	ft_write(long int n, int razr, int result)
{
	char	k;

	while (razr > 0)
	{
		if (razr == 1)
			k = (char)(n + 48);
		else
		{
			k = (char)((n / ft_ten_power(razr)) + 48);
			n = n % ft_ten_power(razr);
		}
		write(1, &k, 1);
		result++;
		razr--;
	}
	return (result);
}

int	ft_putnbr(long int n, int result)
{
	int		razr;

	if (n == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		n = 147483648;
		result = result + 2;
	}
	razr = ft_razryad(n);
	if (n < 0)
	{
		n = ft_otric_num(n);
		result++;
	}
	result = ft_write(n, razr, result);
	return (result);
}
