/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moins_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 07:28:56 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 11:54:18 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void		ft_moins_printf(t_printf *using, va_list ap)
{
	using->index++;
	while (using->str[using->index] >= '0' && using->str[using->index] <= '9')
	{
		using->extra->moins = using->extra->moins * 10
			+ using->str[using->index] - 48;
		using->index++;
	}
	ft_flags_printf(using, ap);
}
