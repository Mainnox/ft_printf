/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:00:59 by akremer           #+#    #+#             */
/*   Updated: 2018/11/07 16:10:49 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ns;
	unsigned char	check;

	check = (unsigned char)c;
	ns = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (ns[i] == check)
			return (ns + i);
		i++;
	}
	return (NULL);
}
