/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 23:49:13 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 23:53:10 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(void)
{
	int a;
	int b;

	a = 7;
	b = 42;
	printf("a = %i , b = %i\n\n", a, b);
	ft_swap(&a, &b);
	printf("ft_swap(a, b)\n\na = %i , b = %i\n", a, b);
	return (0);
}
