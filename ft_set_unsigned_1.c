/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_unsigned_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 07:38:59 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 11:25:29 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_display(unsigned char nb, t_printf *using)
{
	if (nb >= 10)
		ft_display(nb / 10, using);
	ft_putchar(nb % 10 + 48);
}

void		ft_set_unsigned_1(va_list ap, t_printf *using)
{
	int nb;

	nb = va_arg(ap, int);
	if (using->extra->zero)
	{
		using->extra->zero -= ft_nbrlen((unsigned long long)nb, 0);
		while (using->extra->zero > 0)
		{
			ft_putchar('0');
			using->extra->zero--;
		}
	}
	ft_display((unsigned char)nb, using);
	if (using->extra->moins)
		ft_set_moins_printf(using, (unsigned long long)nb, 0, 10);
	using->nbprint += ft_nbrlen((unsigned long long)nb, 0);
}
