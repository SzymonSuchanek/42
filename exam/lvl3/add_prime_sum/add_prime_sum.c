/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:16:57 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/24 14:31:46 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int	is_prime(int n)
{
	int	i;

	i = 2;
	while (n > 1 && n > i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int n)
{
	if (n > 9)
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
	else if (n < 10)
		ft_putchar(n + '0');
}

void	add_prime_sum(int n)
{
	int	result;

	result = 5;
	if (n == 1)
		result = 0;
	else if (n == 2)
		result = 3;
	else if (n == 3)
		result = 6;
	while (n > 3)
	{
		if (is_prime(n))
			result += n;
		n--;
	}
	putnbr(result);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	len;
	int	num;

	i = 0;
	len = 0;
	num = 0;
	if (argc != 2)
		write(1, "0\n", 2);
	if (argv[1])
	{
		while (argv[1][i])
		{
			i++;
			len++;
		}
		i = 0;
		while (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
		{
			if (i == len)
				break ;
			else
			{
				write(1, "0\n", 2);
				return (0);
			}
			i++;
		}
		num = ft_atoi(argv[1]);
		if (is_prime(num))
		{
			add_prime_sum(num);
			write(1, "\n", 1);
		}
		else
			write(1, "0\n", 2);
	}
	return (0);
}

// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// -----------------------------------------

// Write a program that takes a positive integer
// as argument and displays the sum
// of all prime numbers inferior or equal to it
// followed by a newline.

// If the number of arguments is not 1, or the
// argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>