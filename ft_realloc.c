/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:44:05 by akremer           #+#    #+#             */
/*   Updated: 2018/11/21 17:05:58 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_realloc(void *ptr, size_t size)
{
	void	*new;
	int		i;

	i = 0;
	new = NULL;
	if (!ptr && size)
		return (ft_memalloc(size));
	if (size)
	{
		new = ft_memalloc(size);
		new = ptr;
	}
	return (new);
}
