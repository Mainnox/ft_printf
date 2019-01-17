/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_baseA_printf.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 12:50:56 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 08:46:51 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void		ft_display_adress(unsigned int nb, int i)
{
	char ba[16] = "0123456789abcdef";

	if (i == 1)
		ft_putstr("0x");
	if (nb >= 16)
		ft_display_adress(nb / 16, 0);
	ft_putchar(ba[nb % 16]);
}

void				ft_putnbr_baseA_printf(void *p, t_printf *using)
{
	unsigned int nb;

	nb = (unsigned int)p;
	ft_display_adress(nb, 1);
	while (nb >= 16)
	{
		using->nbprint++;
		nb /= 16;
	}
	using->index++;
}
