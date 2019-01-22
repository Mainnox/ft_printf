/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 11:37:56 by akremer           #+#    #+#             */
/*   Updated: 2019/01/22 11:54:19 by akremer          ###   ########.fr       */
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
	long long nb;

	nb = 21474836480;
	a = 42;
	ft_printf("Test de base sans flags chiant:\n");
	ft_printf("Le vrai printf:\n\n");
	   printf("Test chaine sans flags 1\nTest c 1: %c\nTest c 2: %c\nTest s 1: %s\nTest s 2: %s\nTest d 1: %d\nTest o 1: %o\nTest x 1: %x\nTest i 1: %i\nTest X 1: %X\nTest p 1: %p\n", 'a', 'b', "Test string 1", "Test string 2", a, a, a, a, a, b);
	ft_printf("\nLe faux:\n\n");
	ft_printf("Test chaine sans flags 1\nTest c 1: %c\nTest c 2: %c\nTest s 1: %s\nTest s 2: %s\nTest d 1: %d\nTest o 1: %o\nTest x 1: %x\nTest i 1: %i\nTest X 1: %X\nTest p 1: %p\n", 'a', 'b', "Test string 1", "Test string 2", a, a, a, a, a, b);
	ft_printf("\nTest du nombre de character printer:\n");
	vrai = printf("123%d%c%p%s%x\n", a, 'c', b, "long", a);
	faux = ft_printf("123%d%c%p%s%x\n", a, 'c', b, "long", a);
	ft_printf("Valeur printf vrai: %d\n", vrai);
	ft_printf("Valeur printf faux: %d\n", faux);
	ft_printf("\nTest u:\n");
	ft_printf("Le vrai:\n");
	   printf("Test hu: %hu\nTest hhu: %hhu\nTest u: %u\nTest lu: %lu\nTest llu: %llu\n", (unsigned short)nb, (unsigned char)nb, (unsigned int)nb, (unsigned long)nb, (unsigned long long)nb);
	ft_printf("Le faux:\n");
	ft_printf("Test hu: %hu\nTest hhu: %hhu\nTest u: %u\nTest lu: %lu\nTest llu: %llu\n", (unsigned short)nb, (unsigned char)nb, (unsigned int)nb, (unsigned long)nb, (unsigned long long)nb);
	ft_printf("Test de convertion flags h, hh ,l ,ll:\n");
	ft_printf("\nLe vrai :\n\n");
	   printf("Test hd: %hd\nTest hhd: %hhd\nTest lo: %lo\nTest llx: %llx\n", 132, 3, 2147483612, 9223372036854775800);
	ft_printf("\nLe faux:\n\n");
	ft_printf("Test hd: %hd\nTest hhd: %hhd\nTest lo: %lo\nTest llx: %llx\n", 132, 3, 2147483612, 9223372036854775800);
	ft_printf("\nTest float:\n");
	ft_printf("Le vrai:\n");
	   printf("Test float: %f\n", 1.00005);
	ft_printf("Le faux:\n");
	ft_printf("Test float: %f\n", 1.00005);
	ft_printf("\nTest pourcent pourcent:\n");
	ft_printf("Le vrai:\n");
	   printf("Test pourcent pourcent: %%\n");
	ft_printf("Le faux:\n");
	ft_printf("Test pourcent pourcent: %%\n");
	ft_printf("\nTest #:\n");
	ft_printf("Le vrai:\n");
	   printf("Test #: %#o\n%#x\n%#X\n", 10, 30, 45);
	ft_printf("Le faux:\n");
	ft_printf("Test #: %#o\n%#x\n%#X\n", 10, 30, 45);
	ft_printf("\nTest 0:\nLe vrai:\n");
	   printf("Test 04: %04d\n", a);
	ft_printf("Le faux\n");
	ft_printf("Test 04: %04d\n", a);
	ft_printf("\nTest -:\nLe vrai:\n");
	   printf("Test -4X: %-4X s\n", a);
	ft_printf("Le faux:\n");
	ft_printf("Test -4X: %-4X s\n", a);
	printf("%+d\n", 11);
	ft_printf("%+d\n", 11);
	printf("% d\n", 11);
	ft_printf("% d\n", 11);
	return (0);
}
