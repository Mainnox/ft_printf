/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 08:30:03 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 06:49:56 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void		ft_putfloat_printf(double mydouble, t_printf *using)
{
	unsigned long long handling;
	int signe;
	int precision;

	signe = 0;
	using->index++;
	if (mydouble < 0)
	{
		ft_putchar('-');
		mydouble = -mydouble;
		signe = 1;
	}
	handling = (unsigned long long)mydouble;
	using->nbprint += ft_nbrlen(mydouble, signe);
	ft_putlonglong_base(handling, 10);
	if (using->extra->precision != -1)
		precision = using->extra->precision;
	else
		precision = 6;
	if (precision > 0)
	{
		ft_putchar('.');
		while (precision > 0)
		{
			mydouble -= handling;
			mydouble *= 10;
			handling = (int)mydouble;
			ft_putnbr((int)handling);
			precision--;
		}
	}
}
