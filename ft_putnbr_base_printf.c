/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_printf.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 12:37:55 by akremer           #+#    #+#             */
/*   Updated: 2019/01/07 11:00:09 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void				ft_putnbr_base_printf(va_list ap, int base, t_printf *using)
{
	if (using->extra->size == 1)
		ft_set_base_1(ap, using, base);
	else if (using->extra->size == 2)
		ft_set_base_2(ap, using, base);
	else if (using->extra->size == 3)
		ft_set_base_3(ap, using, base);
	else if (using->extra->size == 4)
		ft_set_base_4(ap, using, base);
	else
		ft_set_base_0(ap, using, base);
	using->index++;
}
