/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlonglong_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 08:36:06 by akremer           #+#    #+#             */
/*   Updated: 2019/01/15 08:36:26 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static void		ft_display_nbase(long long nb, int base)
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

void				ft_putlonglong_base(long long nb, int base)
{
	ft_display_nbase(nb, base);
}
