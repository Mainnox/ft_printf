/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_base_0.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 09:55:36 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 10:51:04 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_display(unsigned int nb, t_printf *using, int base)
{
	char ba[16] = "0123456789abcdef";

	if (nb >= (unsigned int)base)
		ft_display(nb / base, using, base);
	ft_putchar(ba[nb % base]);
}

void		ft_set_base_0(va_list ap, t_printf *using, int base)
{
	unsigned int nb;

	nb = va_arg(ap, unsigned int);
	ft_display(nb, using, base);
	using->nbprint += ft_nbrlen((unsigned long long)nb, 0);
}
