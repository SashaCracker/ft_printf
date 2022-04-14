#include "ft_printf.h"

int	ft_types(char *s, va_list ap, t_type *flag, int result)
{
	result = ft_percent(s, result, flag, ap);
	result = ft_d_i_exe(s, ap, flag, result);
	result = ft_u_exe(s, ap, flag, result);
	result = ft_s_exe(s, ap, flag, result);
	result = ft_c_exe(s, ap, flag, result);
	result = ft_x_exe(s, ap, flag, result);
	result = ft_xX_exe(s, ap, flag, result);
	result = ft_p_exe(s, ap, flag, result);
	return (result);
}
