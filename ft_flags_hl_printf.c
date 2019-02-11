/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_hl_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 14:28:12 by akremer           #+#    #+#             */
/*   Updated: 2019/01/07 14:36:13 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void		ft_flags_hl_printf(t_printf *using, va_list ap)
{
	while (42)
	{
		if (using->str[using->index] == 'h')
		{
			using->index++;
			if (using->str[using->index] == 'h')
			{
				using->extra->size = 1;
				using->index++;
				break ;
			}
			using->index++;
			using->extra->size = 2;
			break ;
		}
		if (using->str[using->index] == 'l')
		{
			using->index++;
			if (using->str[using->index] == 'l')
			{
				using->extra->size = 4;
				using->index++;
				break ;
			}
			using->index++;
			using->extra->size = 3;
			break ;
		}
	}
	ft_flags_printf(using, ap);
}
