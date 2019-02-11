#include "includes/ft_printf.h"

void			ft_putnbr_baseG_printf(va_list ap, int base, t_printf *using)
{
	if (using->extra->size == 1)
		ft_set_baseG_1(ap, using, 16);
	else if (using->extra->size == 2)
		ft_set_baseG_2(ap, using, 16);	
	else if (using->extra->size == 3)
		ft_set_baseG_3(ap, using, 16);
	else if (using->extra->size == 4)
		ft_set_baseG_4(ap, using, 16);
	else
		ft_set_baseG_0(ap, using, 16);
	using->index++;
}