/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_unsigned_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 07:38:59 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 09:48:45 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_display(unsigned char nb, t_printf *using)
{
	if (nb >= 10)
		ft_display(nb / 10, using);
	ft_putchar(nb % 10 + 48);
}

void		ft_set_unsigned_1(va_list ap, t_printf *using)
{
	int nb;

	nb = va_arg(ap, int);
	ft_display((unsigned char)nb, using);
	using->nbprint += ft_nbrlen((unsigned long long)nb, 0);
}
