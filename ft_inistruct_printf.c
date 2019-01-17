/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inistruct_printf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 11:09:41 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 06:58:21 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

t_printf		*ft_inistruct_printf(const char *s)
{
	t_printf	*using;
	t_extra		*extra;

	if (!(extra = (t_extra*)malloc(sizeof(t_extra))))
		return (NULL);
	if (!(using = (t_printf*)malloc(sizeof(t_printf))))
		return (NULL);
	using->index = 0;
	using->nbprint = 0;
	using->str = s;
	using->extra = extra;
	return (using);
}
