/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 12:16:28 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 12:26:19 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void		ft_zero_printf(t_printf *using, va_list ap)
{
	using->extra->zero = 0;
	using->index++;
	while (using->str[using->index] >= '0' && using->str[using->index] <= '9')
	{
		using->extra->zero *= 10 + using->str[using->index] - 48;
		using->index++;
	}
	ft_flags_printf(using, ap);
}
