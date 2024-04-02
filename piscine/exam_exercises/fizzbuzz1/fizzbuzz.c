/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:30:32 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/28 21:51:10 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int i)
{
	if (i > 9)
	{
		putnbr(i / 10);
		putnbr(i % 10);
	}
	if (i < 10)
	{
		i = i + '0';
		write (1, &i, 1);
	}
}

void	fizzbuzz(int i)
{
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
}

int	main(void)
{
	int	i;

	i = 1;
	fizzbuzz(i);
	return (0);
}
