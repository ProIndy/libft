#include "../includes/libft.h"

long double	ft_long_rounding(t_conversion *conv, long double fl)
{
	unsigned long long	rounded;
	long double			temp;
	int					decider;

	decider = conv->precision;
	temp = fl;
	while (decider-- > 0)
	{
		temp *= 10;
		conv->rounding_val /= 10;
	}
	rounded = (unsigned long long)temp;
	temp -= rounded;
	temp *= 10;
	decider = (int)temp;
	temp -= decider;
	if (decider == 5)
	{
		if (rounded % 2 == 1 || temp > 0.0)
			fl += conv->rounding_val;
	}
	else
		fl += conv->rounding_val;
	return (fl);
}

long double	ft_double_rounding(t_conversion *conv, long double fl)
{
	unsigned long long	rounded;
	long double			temp;
	int					decider;

	decider = conv->precision;
	temp = fl;
	while (decider-- > 0)
	{
		temp *= 10;
		conv->rounding_val /= 10;
	}
	rounded = (unsigned long long)temp;
	temp -= rounded;
	temp *= 10;
	decider = (int)temp;
	temp -= decider;
	if (decider == 5)
	{
		if (rounded % 2 == 1 || temp > 0.0)
			fl += conv->rounding_val;
	}
	else
		fl += conv->rounding_val;	
	return (fl);
}
