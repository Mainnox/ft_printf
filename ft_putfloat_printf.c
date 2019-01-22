/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:34:35 by akremer           #+#    #+#             */
/*   Updated: 2019/01/07 17:34:41 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void		ft_before_dot(int d, t_printf *using)
{
	if (d >= 10)
		ft_before_dot(d / 10, using);
	ft_putchar(d % 10);
}

static void		ft_after_dot(int d, int precision, t_printf *using, int code)
{
	int count;

	count = ft_nbrlen(d);
	while (precision && count)
	{
		ft_putchar
	}
	ft_putchar();
}

void			ft_putfloat_printf(double f, int precision, t_printf *using)
{
	int d;

	if (f < 0)
	{
		f =-f;
		ft_putchar('-');
	}
	d = (int)(f / 1);
	ft_before_dot(d);
	while (f >= 10)
		f /= 10;
	while (f - (f / 1) != 0)
		f *= 10
	if (precision > 0)
		ft_after_dot(f, precision);
}
