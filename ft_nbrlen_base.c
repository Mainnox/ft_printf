/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 13:21:00 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 13:44:57 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_nbrlen_base(unsigned long long n, char signe, int ba)
{
	int i;
	unsigned long long base;

	base = (unsigned long long)ba;
	i = 0;
	if (signe == 1)
		i++;
	while (n > base)
	{
		n = n / base;
		i++;
	}
	return (i + 1);
}
