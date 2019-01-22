/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_signed_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 09:07:28 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 11:25:13 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_display(short nb)
{
	if (nb == -32768)
		ft_putstr("-32768");
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
			ft_display(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

void		ft_set_signed_2(va_list ap, t_printf *using)
{
	short 	nb;
	char	signe;

	signe = 0;
	nb = va_arg(ap, int);
	if (nb < 0)
		signe = 1;
	if (using->extra->zero)
	{
		if (nb >= 0 && using->extra->plus == 1)
			using->extra->zero--;
		using->extra->zero -= ft_nbrlen((unsigned long long)nb, signe) - signe;
		while (using->extra->zero > 0)
		{
			ft_putchar('0');
			using->extra->zero--;
		}
	}
	if (nb >= 0 && using->extra->plus == 1)
		ft_putchar('+');
	ft_display(nb);
	if (using->extra->moins)
		ft_set_moins_printf(using, (unsigned long long)nb, signe, 10);
	using->nbprint += ft_nbrlen((unsigned long long)nb, signe);
}
