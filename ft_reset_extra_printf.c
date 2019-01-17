/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset_extra_printf.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:36:38 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 13:42:59 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void			ft_reset_extra_printf(t_printf *using)
{
	free(using->extra);
	if (!(using->extra = (t_extra*)malloc(sizeof(t_extra))))
		return ;
	if (!(using->extra->more = (t_more*)malloc(sizeof(t_more))))
		return ;
}
