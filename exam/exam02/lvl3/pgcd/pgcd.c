/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:25:10 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/25 20:38:12 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

void	pgcd(int a, int b)
{
	int		top;
	char	result;

	if (a > b)
		top = b;
	else
		top = a;
	while (top > 0)
	{
		if (a % top == 0 & b % top == 0)
			break ;
		top--;
	}
	result = top + '0';
	write(1, &result, 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
		write(1, "\n", 1);
	else if (argv[1] && argv[2])
	{
		pgcd(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
}

// Assignment name  : pgcd
// Expected files   : pgcd.c
// Allowed functions: printf, atoi, malloc, free
// --------------------------------------------------
// Write a program that takes two strings representing
// two strictly positive
// integers that fit in an int.

// Display their highest common denominator followed by
// a newline (It's always a
// strictly positive integer).

// If the number of parameters is not 2, display a newline.

// Examples:

// $> ./pgcd 42 10 | cat -e
// 2$
// $> ./pgcd 42 12 | cat -e
// 6$
// $> ./pgcd 14 77 | cat -e
// 7$
// $> ./pgcd 17 3 | cat -e
// 1$
// $> ./pgcd | cat -e
// $