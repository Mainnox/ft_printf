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

typedef struct	s_printf
{
	const char	*str;
	int		index;
	int		nbprint;
}		t_printf;

void		ft_printf(const char *s, ...);
void		ft_printf_tab(va_list ap);
void		ft_putchar_printf(char c, t_printf using);
void		ft_putchar_puissant_printf(const char *str, t_printf using);
void		ft_putnbr_printf(int nb, t_printf using);
void		ft_putnbr_base_printf(int nb, int base, t_printf using);
void		ft_putnbr_baseG_printf(int nb, int base, t_printf using);
void		ft_putnbr_baseA_printf(void *p, t_printf using);

#endif
