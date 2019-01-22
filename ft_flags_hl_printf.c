/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_hl_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 14:28:12 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 06:29:17 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

/*static void		ft_flags_l(t_printf *using, va_list ap, unsigned char code)
{
	if (code == 1)
	{
		if (using->str[using->index] == 'd' || using->str[using->index] == 'i'
				|| using->str[using->index] == 'u')
			ft_putlong_base_printf(va_arg(ap, long), 10, using);
		if (using->str[using->index] == 'o') 
			ft_putlong_base_printf(va_arg(ap, long), 8, using);
		if (using->str[using->index] == 'x') 
			ft_putlong_base_printf(va_arg(ap, long), 16, using);
		if (using->str[using->index] == 'X')
			ft_putlong_baseG_printf(va_arg(ap, long), 16, using);
	}	
	else if (code == 2)
	{
		if (using->str[using->index] == 'd' || using->str[using->index] == 'i'
				|| using->str[using->index] == 'u')
			ft_putlonglong_base_printf(va_arg(ap, long long), 10, using);
		if (using->str[using->index] == 'o') 
			ft_putlonglong_base_printf(va_arg(ap, long long), 8, using);
		if (using->str[using->index] == 'x') 
			ft_putlonglong_base_printf(va_arg(ap, long long), 16, using);
		if (using->str[using->index] == 'X')
			ft_putlonglong_baseG_printf(va_arg(ap, long long), 16, using);
	}
}

void		ft_flags_hl_printf(t_printf *using, va_list ap)
{
	if (using->str[using->index] == 'h')
	{
		using->index++;
		if (using->str[using->index] == 'h')
			using->index++;
		ft_flags_printf(using, ap);
	}
	else if (using->str[using->index] == 'l')
	{
		using->index++;
		if (using->str[using->index] == 'l')
		{
			using->index++;
			ft_flags_l(using, ap, 2);
			return ;
		}
		ft_flags_l(using, ap, 1);
	}
}*/

void		ft_flags_hl_printf(t_printf *using, va_list ap)
{
	while (42)
	{
		if (using->str[using->index] == 'h')
		{
			using->index++;
			if (using->str[using->index] == 'h')
			{
				using->index++;
				using->extra->size = 1;
				break ;
			}
			using->extra->size = 2;
			break ;
		}
		if (using->str[using->index] == 'l')
		{
			using->index++;
			if (using->str[using->index] == 'l')
			{
				using->index++;
				using->extra->size = 4;
				break ;
			}
			using->extra->size = 3;
			break ;
		}
	}
	ft_flags_printf(using, ap);
}
