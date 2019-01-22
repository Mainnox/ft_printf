/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blank_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 10:26:54 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 11:21:03 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void		ft_blank_printf(t_printf *using, va_list ap)
{
	using->index++;
	using->extra->blank = 1;
	ft_flags_printf(using, ap);
}
