/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 14:17:58 by akremer           #+#    #+#             */
/*   Updated: 2019/01/07 16:42:28 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void     ft_flags_printf(t_printf *using, va_list ap)
{
	if (using->str[using->index] == '%')
		using->index++;
	if (using->str[using->index] == 'c')
		ft_putchar_printf(va_arg(ap, int), using);
	if (using->str[using->index] == 's')
		ft_putchar_puissant_printf(va_arg(ap, char*), using);
	if (using->str[using->index] == 'd' || using->str[using->index] == 'i' || using->str[using->index] == 'u')
		ft_putnbr_printf(va_arg(ap, int), using);
	if (using->str[using->index] == 'o') 
		ft_putnbr_base_printf(va_arg(ap, int), 8, using);
	if (using->str[using->index] == 'x') 
		ft_putnbr_base_printf(va_arg(ap, int), 16, using);
	if (using->str[using->index] == 'X')
		ft_putnbr_baseG_printf(va_arg(ap, int), 16, using);
	if (using->str[using->index] == 'p')
		ft_putnbr_baseA_printf(va_arg(ap, void*), using);
	if (using->str[using->index] == 'h' || using->str[using->index] == 'l')
		ft_flags_hl_printf(using, ap);
//	if (using->str[using->index] == 'f')
//		ft_putfloat_printf(va_arg(ap, float), using);
}
