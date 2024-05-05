/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:46:04 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/26 18:43:16 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	lowest_divider(int n)
{
	int	i;

	i = 2;
	while (i <= n)
	{
		if (n % i == 0)
			return (i);
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%d ", lowest_divider(15));
// 	return (0);
// }

void	fprime(int n)
{
	int	arr[50] = {0};
	int	temp;

	temp = 0;
	while (n > 1)
	{
		arr[temp] = lowest_divider(n);
		n = n / arr[temp];
		temp++;
	}
	temp = 0;
	while (arr[temp])
	{
		if (temp > 0)
			printf("*");
		printf("%d", arr[temp]);
		temp++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		printf("\n");
	else if (argv[1])
	{
		fprime(atoi(argv[1]));
		printf("\n");
	}
	return (0);
}

// Assignment name  : fprime
// Expected files   : fprime.c
// Allowed functions: printf, atoi
// --------------------------------------------------------------------------------

// Write a program that takes a positive int and displays its prime factors on the
// standard output, followed by a newline.

// Factors must be displayed in ascending order and separated by '*', so that
// the expression in the output gives the right result.

// If the number of parameters is not 1, simply display a newline.

// The input, when there is one, will be valid.

// Examples:

// $> ./fprime 225225 | cat -e
// 3*3*5*5*7*11*13$
// $> ./fprime 8333325 | cat -e
// 3*3*5*5*7*11*13*37$
// $> ./fprime 9539 | cat -e
// 9539$
// $> ./fprime 804577 | cat -e
// 804577$
// $> ./fprime 42 | cat -e
// 2*3*7$
// $> ./fprime 1 | cat -e
// 1$
// $> ./fprime | cat -e
// $
// $> ./fprime 42 21 | cat -e
// $