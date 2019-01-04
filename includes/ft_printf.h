/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 11:38:33 by akremer           #+#    #+#             */
/*   Updated: 2019/01/04 12:52:57 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft.h"
#include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_printf_tab(va_list ap);
int		ft_putchar_printf(char c, int j);
int		ft_putchar_puissant_printf(const char *str, int j);
int		ft_putnbr_printf(int nb, int j);
int		ft_putnbr_base_printf(int nb, int base, int j);
int		ft_putnbr_baseG_printf(int nb, int base, int j);
int		ft_putnbr_baseA_printf(void *p, int j);

#endif
