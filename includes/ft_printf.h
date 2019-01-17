/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 11:38:33 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 13:44:55 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft.h"
#include <stdarg.h>

typedef struct	s_more
{
	char		plus;
	int			moins;
}				t_more;

typedef struct	s_extra
{
	int 		precision;
	char		size;
	char		hashtag;
	int			zero;
	t_more		*more;
}				t_extra;

typedef struct	s_printf
{
	const char	*str;
	int			index;
	int			nbprint;
	t_extra		*extra;
}				t_printf;

int				ft_printf(const char *s, ...);
void			ft_printf_tab(va_list ap);
void			ft_putchar_printf(char c, t_printf *using);
void			ft_putchar_puissant_printf(const char *str, t_printf *using);
void			ft_putnbr_printf(va_list ap, t_printf *using);
void			ft_putnbr_base_printf(va_list ap, int base, t_printf *using);
void			ft_putnbr_baseG_printf(va_list ap, int base, t_printf *using);
void			ft_putnbr_baseA_printf(void *p, t_printf *using);
t_printf		*ft_inistruct_printf(const char *s);
void			ft_flags_printf(t_printf *using, va_list ap);
void			ft_putlong_base_printf(long nb, int base, t_printf *using);
void			ft_putlong_baseG_printf(long nb, int base, t_printf *using);
void			ft_putlonglong_base_printf(long long nb, int base, t_printf *using);
void			ft_putlonglong_baseG_printf(long long nb, int base, t_printf *using);
void			ft_flags_hl_printf(t_printf *using, va_list ap);
void			ft_putfloat_printf(double f, t_printf *using);
void			ft_set_signed_0(va_list ap, t_printf *using);
void			ft_set_signed_1(va_list ap, t_printf *using);
void			ft_set_signed_2(va_list ap, t_printf *using);
void			ft_set_signed_3(va_list ap, t_printf *using);
void			ft_set_signed_4(va_list ap, t_printf *using);
void			ft_set_unsigned_0(va_list ap, t_printf *using);
void			ft_set_unsigned_1(va_list ap, t_printf *using);
void			ft_set_unsigned_2(va_list ap, t_printf *using);
void			ft_set_unsigned_3(va_list ap, t_printf *using);
void			ft_set_unsigned_4(va_list ap, t_printf *using);
void			ft_set_base_0(va_list ap, t_printf *using, int base);
void			ft_set_base_1(va_list ap, t_printf *using, int base);
void			ft_set_base_2(va_list ap, t_printf *using, int base);
void			ft_set_base_3(va_list ap, t_printf *using, int base);
void			ft_set_base_4(va_list ap, t_printf *using, int base);
void			ft_set_baseG_0(va_list ap, t_printf *using, int base);
void			ft_set_baseG_1(va_list ap, t_printf *using, int base);
void			ft_set_baseG_2(va_list ap, t_printf *using, int base);
void			ft_set_baseG_3(va_list ap, t_printf *using, int base);
void			ft_set_baseG_4(va_list ap, t_printf *using, int base);
void			ft_print_printf(t_printf *using, va_list ap);
void			ft_putunsigned_printf(va_list ap, t_printf *using);
void			ft_hashtag_printf(t_printf *using, va_list ap);
void			ft_reset_extra_printf(t_printf *using);
void			ft_zero_printf(t_printf *using, va_list ap);

#endif
