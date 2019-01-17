/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_unsigned_0.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 07:32:51 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 08:26:44 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_display(unsigned int nb, t_printf *using)
{
	if (nb >= 10)
		ft_display(nb / 10, using);
	ft_putchar(nb % 10 + 48);
}

void		ft_set_unsigned_0(va_list ap, t_printf *using)
{
	unsigned int nb;

	nb = va_arg(ap, unsigned int);
	ft_display(nb, using);
	using->nbprint += ft_nbrlen((unsigned long long)nb, 0);
}
