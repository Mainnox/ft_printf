/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 11:37:56 by akremer           #+#    #+#             */
/*   Updated: 2019/01/04 11:23:46 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int			main()
{
	int a;
	void	*b;
	int vrai;
	int faux;

	a = 42;
	ft_printf("\nLe vrai printf:\n\n");
	   printf("Test chaine sans flags 1\nTest c 1: %c\nTest c 2: %c\nTest s 1: %s\nTest s 2: %s\nTest d 1: %d\nTest o 1: %o\nTest x 1: %x\nTest i 1: %i\nTest X 1: %X\nTest p 1: %p\n", 'a', 'b', "Test string 1", "Test string 2", a, a, a, a, a, b);
	ft_printf("\nLe faux:\n\n");
	ft_printf("Test chaine sans flags 1\nTest c 1: %c\nTest c 2: %c\nTest s 1: %s\nTest s 2: %s\nTest d 1: %d\nTest o 1: %o\nTest x 1: %x\nTest i 1: %i\nTest X 1: %X\nTest p 1: %p\n", 'a', 'b', "Test string 1", "Test string 2", a, a, a, a, a, b);
	vrai = printf("123%d%c%p%s%x\n", a, 'c', b, "long", a);
	faux = ft_printf("123%d%c%p%s%x\n", a, 'c', b, "long", a);
	ft_printf("Valeur printf vrai: %d\n", vrai);
	ft_printf("Valeur printf faux: %d\n", faux);

	return (0);
}
