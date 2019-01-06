/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 12:45:04 by akremer           #+#    #+#             */
/*   Updated: 2019/01/04 12:55:38 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static t_printf		ft_inistructprintf(const char *s)
{
	t_printf using;

	if (!(using = (t_printf)malloc(sizeof(t_printf))))
		return (NULL);
	using->index = 0;
	using->nbprint = 0;
	using->using->str = s;
	return (using);
}

static void		ft_flags(t_printf using, va_list ap)
{
	using->index++;
	if (using->str[using->index] == 'c')
	 	ft_putchar_printf(va_arg(ap, int), using);
	if (using->str[using->index] == 's')
		ft_putchar_puissant_printf(va_arg(ap, char*), using);
	if (using->str[i] == 'd' || using->str[i] == 'i' || using->str[i] == 'u')
		ft_putnbr_printf(va_arg(ap, int), using);
	if (using->str[i] == 'o')
		ft_putnbr_base_printf(va_arg(ap, int), 8, using);
	if (using->str[i] == 'x')
		ft_putnbr_base_printf(va_arg(ap, int), 16, using);
	if (using->str[i] == 'X')
		ft_putnbr_baseG_printf(va_arg(ap, int), 16, using);
	if (using->str[i] == 'p')
		ft_putnbr_baseA_printf(va_arg(ap, void*), using);
//	if (using->str[i] == 'h')
//		j += ft_checkh_printf(using->str, i, ap, j);
//	if (using->str[i] == 'l')
//		j += ft_checkl_printf(using->str, i, ap, j);
	return (using);
}

int			ft_printf(const char *s, ...)
{
	va_list		ap;
	t_printf	using;

	using = ft_inistructprintf(s);
	va_start(ap, using->str);
	while (using->str[using->index])
	{
		if (using->str[using->index] == '\\')
		{
			ft_putchar(using->str[using->index + 1]);
			continue ;
		}
		if (using->str[i] == '%')
		{
			ft_flags(using, ap);
			continue ;
		}
		ft_putchar(using->str[using->index]);
		i++;
	}
	va_end(ap);
	free(using);
	return (using->nbprint + using->index);
}
