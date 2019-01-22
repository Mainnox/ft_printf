/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 14:17:58 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 11:41:11 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void     ft_flags_printf(t_printf *using, va_list ap)
{
	if (using->str[using->index] == '0' && using->extra->done != 1)
		ft_zero_printf(using, ap);
	if (using->str[using->index] == '-' && using->extra->done != 1)
		ft_moins_printf(using, ap);
	if (using->str[using->index] == '+' && using->extra->done != 1)
		ft_plus_printf(using, ap);
	if (using->str[using->index] == ' ' && using->extra->done != 1)
		ft_blank_printf(using, ap);
	if ((using->str[using->index] == 'd' || using->str[using->index] == 'i'
			|| using->str[using->index] == 'u' || using->str[using->index] == 'c'
			|| using->str[using->index] == 's' || using->str[using->index] == 'o'
			|| using->str[using->index] == 'x' || using->str[using->index] == 'X'
			|| using->str[using->index] == 'p' || using->str[using->index] == 'f') && using->extra->done != 1)
		ft_print_printf(using, ap);
	if ((using->str[using->index] == 'h' || using->str[using->index] == 'l') && using->extra->done != 1)
		ft_flags_hl_printf(using, ap);
	if (using->str[using->index] == '%' && using->extra->done != 1)
		ft_putchar('%');
	if (using->str[using->index] == '#' && using->extra->done != 1)
		ft_hashtag_printf(using, ap);
}
