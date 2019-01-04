/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 12:40:43 by akremer           #+#    #+#             */
/*   Updated: 2019/01/04 13:40:22 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_display_nb(int nb)
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
			ft_display_nb(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

int			ft_putnbr_printf(int nb, int j)
{
	j -= 2;
	ft_display_nb(nb);
	if (nb < 0)
		j++;
	while (nb >= 10)
	{
		j++;
		nb /= 10;
	}
	return (j);
}
