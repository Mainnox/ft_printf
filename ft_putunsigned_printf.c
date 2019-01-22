/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_printf.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 07:08:15 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 06:37:22 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void			ft_putunsigned_printf(va_list ap, t_printf *using)
{
	if (using->extra->size == 1)
		ft_set_unsigned_1(ap, using);
	else if (using->extra->size == 2)
		ft_set_unsigned_2(ap, using);
	else if (using->extra->size == 3)
		ft_set_unsigned_3(ap, using);
	else if (using->extra->size == 4)
		ft_set_unsigned_4(ap, using);
	else
		ft_set_unsigned_0(ap, using);
	using->index++;
}
