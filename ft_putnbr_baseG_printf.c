/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_baseG_printf.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 12:01:32 by akremer           #+#    #+#             */
/*   Updated: 2019/01/04 13:40:05 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void		ft_display_nb(int nb, int base)
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
	ba[10] = 'A';
	ba[11] = 'B';
	ba[12] = 'C';
	ba[13] = 'D';
	ba[14] = 'E';
	ba[15] = 'F';
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= base)
		ft_display_nb(nb / base, base);
	ft_putchar(ba[nb % base]);
}

void				ft_putnbr_baseG_printf(int nb, int base, t_print using)
{
	using->nbprint -= 2;
	ft_display_nb(nb, base);
	if (nb < 0)
		using->nbprint++;
	while (nb <= base)
	{
		using->nbprint++;
		nb /= base;
	}
	using->index++;
}
