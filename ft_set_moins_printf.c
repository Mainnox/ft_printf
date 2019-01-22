/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_moins_printf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 07:31:10 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 11:50:37 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void		ft_set_moins_printf(t_printf *using
		,unsigned long long nb,  int signe, int base)
{
	using->extra->moins -= ft_nbrlen_base(nb, signe, base) - signe;
	while (using->extra->moins > 0)
	{
		ft_putchar(' ');
		using->extra->moins--;
	}
}
