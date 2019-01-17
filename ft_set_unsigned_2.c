/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_unsigned_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 07:39:29 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 13:33:35 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_display(unsigned short nb, t_printf *using)
{
	if (nb >= 10)
		ft_display(nb / 10, using);
	ft_putchar(nb % 10 + 48);
}

void		ft_set_unsigned_2(va_list ap, t_printf *using)
{
	unsigned short nb;

	nb = va_arg(ap, int);
	if (using->extra->zero)
	{
		using->extra->zero -= ft_nbrlen((unsigned long long)nb, 0);
		while (using->extra->zero < 0)
		{
			ft_putchar('0');
			using->extra->zero--;
		}
	}
	ft_display((unsigned short)nb, using);
	using->nbprint += ft_nbrlen((unsigned long long)nb, 0);
}
