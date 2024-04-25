/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:23:50 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/25 20:09:02 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_cf(unsigned int a, unsigned int b)
{
	int	i;

	if (a > b)
		i = b;
	else
		i = a;
	while (i > 0)
	{
		if (a % i == 0 && b % i == 0)
			return (i);
		i--;
	}
	return (i);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	i;
	int	result;
	int	cf;

	result = a * b;
	i = 0;
	if (a == 0 || b == 0)
		return (0);
	cf = ft_cf(a, b);
	result = result / cf;
	return (result);
}

int	main(void)
{
	int	result;

	result = lcm(6, 10);
	printf("%d ", result);
	return (0);
}

// Assignment name  : lcm
// Expected files   : lcm.c
// Allowed functions:
// -------------------------------------------------------

// Write a function who takes two unsigned int as parameters
// and returns the
// computed LCM of those parameters.

// LCM (Lowest Common Multiple) of two non-zero integers is
// the smallest postive
// integer divisible by the both integers.

// A LCM can be calculated in two ways:

// - You can calculate every multiples of each integers until
// you have a common
// multiple other than 0

// - You can use the HCF (Highest Common Factor) of these two
// integers and
// calculate as follows:

// 	LCM(x, y) = | x * y | / HCF(x, y)

//   | x * y | means "Absolute value of the product of x by y"

// If at least one integer is null, LCM is equal to 0.

// Your function must be prototyped as follows:

//   unsigned int    lcm(unsigned int a, unsigned int b);