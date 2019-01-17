/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_unsigned_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 07:40:03 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 13:33:48 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_display(unsigned long nb, t_printf *using)
{
	if (nb >= 10)
		ft_display(nb / 10, using);
	ft_putchar(nb % 10 + 48);
}

void		ft_set_unsigned_3(va_list ap, t_printf *using)
{
	unsigned long nb;

	nb = va_arg(ap, unsigned long);
	if (using->extra->zero)
	{
		using->extra->zero -= ft_nbrlen((unsigned long long)nb, 0);
		while (using->extra->zero < 0)
		{
			ft_putchar('0');
			using->extra->zero--;
		}
	}
	ft_display(nb, using);
	using->nbprint += ft_nbrlen((unsigned long long)nb, 0);
}
