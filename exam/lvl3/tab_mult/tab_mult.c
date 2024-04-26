/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:29:17 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/26 15:11:47 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	atoi(char *s)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s[i])
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result);
}

void	putnbr(int	n)
{
	if (n > 9)
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
	else if (n < 10)
		ft_putchar(n + '0');
}

void	tab_mult(int n)
{
	int	i;
	int	result;

	i = 1;
	while (i < 10)
	{
		result = n * i;
		ft_putchar(i + '0');
		write(1, " x ", 3);
		ft_putchar(n + '0');
		write(1, " = ", 3);
		putnbr(result);
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		write(1, "\n", 1);
	else if (argv[1])
		tab_mult(atoi(argv[1]));
	return (0);
}



// Assignment name  : tab_mult
// Expected files   : tab_mult.c
// Allowed functions: write
// --------------------------------------------------------

// Write a program that displays a number's multiplication 
// table.

// The parameter will always be a strictly positive number 
// that fits in an int,
// and said number times 9 will also fit in an int.

// If there are no parameters, the program displays \n.

// Examples:

// $>./tab_mult 9
// 1 x 9 = 9
// 2 x 9 = 18
// 3 x 9 = 27
// 4 x 9 = 36
// 5 x 9 = 45
// 6 x 9 = 54
// 7 x 9 = 63
// 8 x 9 = 72
// 9 x 9 = 81
// $>./tab_mult 19
// 1 x 19 = 19
// 2 x 19 = 38
// 3 x 19 = 57
// 4 x 19 = 76
// 5 x 19 = 95
// 6 x 19 = 114
// 7 x 19 = 133
// 8 x 19 = 152
// 9 x 19 = 171
// $>
// $>./tab_mult | cat -e
// $
// $>