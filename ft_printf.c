/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 12:45:04 by akremer           #+#    #+#             */
/*   Updated: 2019/01/07 17:35:20 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

/*static void		ft_flags(t_printf *using, va_list ap)
{
	if (using->str[using->index] == '%')
		using->index++;
	if (using->str[using->index] == 'c')
	 	ft_putchar_printf(va_arg(ap, int), using);
	if (using->str[using->index] == 's')
		ft_putchar_puissant_printf(va_arg(ap, char*), using);
	if (using->str[using->index] == 'd' || using->str[using->index] == 'i' || using->str[using->index] == 'u')
		ft_putnbr_printf(va_arg(ap, int), using);
	if (using->str[using->index] == 'o')
		ft_putnbr_base_printf(va_arg(ap, int), 8, using);
	if (using->str[using->index] == 'x')
		ft_putnbr_base_printf(va_arg(ap, int), 16, using);
	if (using->str[using->index] == 'X')
		ft_putnbr_baseG_printf(va_arg(ap, int), 16, using);
	if (using->str[using->index] == 'p')
		ft_putnbr_baseA_printf(va_arg(ap, void*), using);
//	if (using->str[i] == 'h')
//		j += ft_checkh_printf(using->str, i, ap, j);
//	if (using->str[i] == 'l')
//		j += ft_checkl_printf(using->str, i, ap, j);
}*/

int			ft_printf(const char *s, ...)
{
	va_list		ap;
	t_printf	*using;

	using = ft_inistruct_printf(s);
	va_start(ap, s);
	while (using->str[using->index])
	{
		if (using->str[using->index] == '\\')
		{
			ft_putchar(using->str[using->index + 1]);
			continue ;
		}
		if (using->str[using->index] == '%')
		{
			ft_flags_printf(using, ap);
			continue ;
		}
		ft_putchar(using->str[using->index]);
		using->index++;
	}
	va_end(ap);
	free(using);
	return (using->nbprint + using->index);
}
