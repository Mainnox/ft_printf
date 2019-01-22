/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plus_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 08:44:14 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 11:21:15 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void			ft_plus_printf(t_printf *using, va_list ap)
{
	using->index++;
	using->extra->plus = 1;
	ft_flags_printf(using, ap);
}
