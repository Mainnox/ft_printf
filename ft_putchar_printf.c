/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 11:50:30 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 08:32:05 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void			ft_putchar_printf(char c, t_printf *using)
{
	using->nbprint -= 1;
	write(1, &c, 1);
	using->index ++;
}
