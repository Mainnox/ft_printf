/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 12:40:43 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 07:01:28 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void			ft_putnbr_printf(va_list ap, t_printf *using)
{
	if (using->extra->size == 1)
		ft_set_signed_1(ap, using);
	else if (using->extra->size == 2)
		ft_set_signed_2(ap, using);
	else if (using->extra->size == 3)
		ft_set_signed_3(ap, using);
	else if (using->extra->size == 4)
		ft_set_signed_4(ap, using);
	else
		ft_set_signed_0(ap, using);
	using->index++;
}
