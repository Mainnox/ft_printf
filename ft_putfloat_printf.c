/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:34:35 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 14:51:25 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void			ft_putfloat_printf(double f, t_printf *using)
{
	int precision;
	unsigned long long nb;

	if (f < 0)
	{
		f = -f;
		ft_putchar('-');
	}
	nb = (unsigned long long)f;
	ft_putnbr((int)nb);
	if (using->extra->precision == -1)
		precision = 6;
	else
		precision = using->extra->precision;
	if (precision > 0)
	{
		ft_putchar('.');
		while (precision > 0)
		{
			f -= nb;
			f *= 10;
			nb = (unsigned long long)f;
			ft_putchar(nb + 48);
			precision--;
		}
	}
}
