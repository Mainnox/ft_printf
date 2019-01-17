/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashtag_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:24:54 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 11:43:56 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void		ft_hashtag_printf(t_printf *using, va_list ap)
{
	using->extra->hashtag = 1;
	using->index++;
	ft_flags_printf(using, ap);
}
