/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_baseG.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 17:53:20 by akremer           #+#    #+#             */
/*   Updated: 2018/12/29 18:08:59 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_putnbr_baseG(int nb, int base)
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
		ft_putnbr_base(nb / base, base);
	ft_putchar(ba[nb % base]);
}
