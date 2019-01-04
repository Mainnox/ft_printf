/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_puissant.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:24:38 by akremer           #+#    #+#             */
/*   Updated: 2019/01/04 13:39:45 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int			ft_putchar_puissant_printf(const char *str, int j)
{
	j += ft_strlen(str) - 2;
	write(1, str, ft_strlen(str));
	return (j);
}
