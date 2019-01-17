/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 14:17:58 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 11:43:05 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void     ft_flags_printf(t_printf *using, va_list ap)
{
	if (using->str[using->index] == '%')
		using->index++;
	if (using->str[using->index] == 'd' || using->str[using->index] == 'i'
			|| using->str[using->index] == 'u' || using->str[using->index] == 'c'
			|| using->str[using->index] == 's' || using->str[using->index] == 'o'
			|| using->str[using->index] == 'x' || using->str[using->index] == 'X'
			|| using->str[using->index] == 'p' || using->str[using->index] == 'f')
		ft_print_printf(using, ap);
	if (using->str[using->index] == 'h' || using->str[using->index] == 'l')
		ft_flags_hl_printf(using, ap);
	if (using->extra->size)
		using->extra->size = 0;
	if (using->str[using->index] == '%')
		ft_putchar('%');
	if (using->str[using->index] == '#')
		ft_hashtag_printf(using, ap);
	ft_reset_extra_printf(using);
}
