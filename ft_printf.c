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

static int		ft_flags(const char *str, int i, va_list ap, int j)
{
	i++;
	if (str[i] == 'c')
		j += ft_putchar_printf(va_arg(ap, int), j);
	if (str[i] == 's')
		j += ft_putchar_puissant_printf(va_arg(ap, char*), j);
	if (str[i] == 'd' || str[i] == 'i' || str[i] == 'u')
		j += ft_putnbr_printf(va_arg(ap, int), j);
	if (str[i] == 'o')
		j += ft_putnbr_base_printf(va_arg(ap, int), 8, j);
	if (str[i] == 'x')
		j += ft_putnbr_base_printf(va_arg(ap, int), 16, j);
	if (str[i] == 'X')
		j += ft_putnbr_baseG_printf(va_arg(ap, int), 16, j);
	if (str[i] == 'p')
		j += ft_putnbr_baseA_printf(va_arg(ap, void*), j);
	return (j);
}

int			ft_printf(const char *str, ...)
{
	int i;
	va_list ap;
	int j;

	va_start(ap, str);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '\\')
		{
			ft_putchar(str[i + 1]);
			i += 2;
			continue ;
		}
		if (str[i] == '%')
		{
			j = ft_flags(str, i, ap, j);
			i += 2;
			continue ;
		}
		ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (j + i);
}
