/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_baseA_printf.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 12:50:56 by akremer           #+#    #+#             */
/*   Updated: 2019/01/04 13:39:53 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static void		ft_display_adress(unsigned int nb)
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
	ft_putstr("0x");
	if (nb >= 16)
		ft_display_adress(nb / 16);
	ft_putchar(ba[nb % 16]);
}

int				ft_putnbr_baseA_printf(void *p, int j)
{
	unsigned int nb;

	nb = (unsigned int)p;
	ft_display_adress(nb);
	while (nb >= 16)
	{
		j++;
		nb /= 16;
	}
	return (j);
}
