/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 07:00:31 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 14:52:31 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void		ft_print_printf(va_list ap, t_printf *using)
{
	if (using->str[using->index] == 'c')
		ft_putchar_printf(va_arg(ap, int), using);
	if (using->str[using->index] == 's')
		ft_putchar_puissant_printf(va_arg(ap, char*), using);
	if (using->str[using->index] == 'd' || using->str[using->index] == 'i')
		ft_putnbr_base_printf(ap, 10, using);
	if (using->str[using->index] == 'u')
		ft_putunsigned_printf(ap, using);
	if (using->str[using->index] == 'o')
		ft_putnbr_base_printf(ap, 8, using);
	if (using->str[using->index] == 'x')
		ft_putnbr_base_printf(ap, 16, using);
	if (using->str[using->index] == 'X')
		ft_putnbr_baseG_printf(ap, 16, using);
	if (using->str[using->index] == 'p')
		ft_putnbr_baseA_printf(va_arg(ap, void*), using);
//	if (using->str[using->index] == 'f')
//		ft_putfloat_printf(va_arg(ap, double), using);
	using->extra->done = 1;
}

