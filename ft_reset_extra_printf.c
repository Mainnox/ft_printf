/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset_extra_printf.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:36:38 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 11:38:24 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void			ft_reset_extra_printf(t_printf *using)
{
	free(using->extra);
	if (!(using->extra = (t_extra*)malloc(sizeof(t_extra))))
		return ;
}
