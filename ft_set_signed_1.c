/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_signed_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 09:02:45 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 10:31:50 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_display(unsigned char nb)
{
	if (nb >= 10)
		ft_display(nb / 10);
	ft_putchar(nb % 10 + 48);
}

void		ft_set_signed_1(va_list ap, t_printf *using)
{
	unsigned char	nb;
	char			signe;

	signe = 0;
	nb = va_arg(ap, int);
	ft_display(nb);
	using->nbprint += ft_nbrlen((unsigned long long)nb, signe);
}
