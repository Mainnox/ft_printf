/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_base_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 09:59:04 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 10:51:10 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_display(unsigned short nb, t_printf *using, int base)
{
	char ba[16] = "0123456789abcdef";

	if (nb >= base)
		ft_display(nb / base, using, base);
	ft_putchar(ba[nb % base]);
}

void		ft_set_base_2(va_list ap, t_printf *using, int base)
{
	unsigned short nb;

	nb = va_arg(ap, int);
	ft_display(nb, using, base);
	using->nbprint += ft_nbrlen((unsigned long long)nb, 0);
}
