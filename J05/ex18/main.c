/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 10:42:10 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 20:06:56 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	test(char *n, char *b)
{
	char	n1[20];
	char	n2[20];

	strcat(strcpy(n1, "+"), n);
	strcat(strcpy(n2, "-"), n);
	printf("ft_atoi_base(%s, %s) => %i\n", n, b, ft_atoi_base(n, b));
	printf("________________________________________\n\n");
	printf("ft_atoi_base(%s, %s) => %i\n", n1, b, ft_atoi_base(n1, b));
	printf("________________________________________\n\n");
	printf("ft_atoi_base(%s, %s) => %i\n", n2, b, ft_atoi_base(n2, b));
}

void	test1(char *n)
{
	test(n, "01");
	printf("________________________________________\n\n");
	test(n, "01234567");
	printf("________________________________________\n\n");
	test(n, "0123456789");
	printf("________________________________________\n\n");
	test(n, "0123456789ABCDEF");
}

int		main(void)
{
	test1("0");
	printf("\n\n////////////////////////////////////////\n\n\n");
	test1("1");
	printf("\n\n////////////////////////////////////////\n\n\n");
	test1("10");
	printf("\n\n////////////////////////////////////////\n\n\n");
	test1("42");
	printf("\n\n////////////////////////////////////////\n\n\n");
	test1("52");
	printf("\n\n////////////////////////////////////////\n\n\n");
	test1("2A");
	printf("\n\n////////////////////////////////////////\n\n\n");
	test1("101010");
	printf("\n\n////////////////////////////////////////\n\n\n");
	return (0);
}
