/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_baseG_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 10:34:47 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 11:24:17 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_display(unsigned int nb, t_printf *using, int base)
{
	char ba[16] = "0123456789ABCDEF";

	if (nb >= (unsigned int)base)
		ft_display(nb / base, using, base);
	ft_putchar(ba[nb % base]);
}

void		ft_set_baseG_1(va_list ap, t_printf *using, int base)
{
	unsigned int nb;

	nb = va_arg(ap, unsigned int);
	if (using->extra->zero)
	{
		using->extra->zero -= ft_nbrlen_base((unsigned long long)nb, 0, base);
		while (using->extra->zero > 0)
		{
			ft_putchar('0');
			using->extra->zero--;
		}
	}
	ft_display(nb, using, base);
	if (using->extra->moins)
		ft_set_moins_printf(using, (unsigned long long)nb, 0, base);
	using->nbprint += ft_nbrlen((unsigned long long)nb, 0);
}
