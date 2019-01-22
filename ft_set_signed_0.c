/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_signed_0.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 08:53:58 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 11:51:02 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_display(int nb)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648");
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

void		ft_set_signed_0(va_list ap, t_printf *using)
{
	int 	nb;
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
	if (nb >= 0 && using->extra->blank == 1)
		ft_putchar(' ');
	if (nb >= 0 && using->extra->plus == 1)
		ft_putchar('+');
	ft_display(nb);
	if (using->extra->moins)
		ft_set_moins_printf(using, (unsigned long long)nb, signe, 10);
	using->nbprint += ft_nbrlen((unsigned long long)nb, signe);
}
