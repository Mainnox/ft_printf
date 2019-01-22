/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_base_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 09:57:30 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 11:24:38 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_display(unsigned char nb, t_printf *using, int base)
{
	char ba[16] = "0123456789abcdef";

	if (nb >= base)
		ft_display(nb / base, using, base);
	ft_putchar(ba[nb % base]);
}

void		ft_set_base_1(va_list ap, t_printf *using, int base)
{
	unsigned char nb;

	nb = va_arg(ap, int);
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
