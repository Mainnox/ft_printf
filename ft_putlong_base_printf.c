/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong_base_printf.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 13:54:19 by akremer           #+#    #+#             */
/*   Updated: 2019/01/07 14:33:20 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void		ft_display_nbase(long nb, int base)
{
	char ba[16];

	ba[0] = '0';
	ba[1] = '1';
	ba[2] = '2';
	ba[3] = '3';
	ba[4] = '4';
	ba[5] = '5';
	ba[6] = '6';
	ba[7] = '7';
	ba[8] = '8';
	ba[9] = '9';
	ba[10] = 'a';
	ba[11] = 'b';
	ba[12] = 'c';
	ba[13] = 'd';
	ba[14] = 'e';
	ba[15] = 'f';
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= base)
		ft_display_nbase(nb / base, base);
	ft_putchar(ba[nb % base]);
}

void				ft_putlong_base_printf(long nb, int base, t_printf *using)
{
	using->nbprint -= 2;
	ft_display_nbase(nb, base);
	if (nb < 0)
		using->nbprint++;
	while (nb / base <= 0)
	{
		using->nbprint++;
		nb /= base;
	}
	using->index++;
}
