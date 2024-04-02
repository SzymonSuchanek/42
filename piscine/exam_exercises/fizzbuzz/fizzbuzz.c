/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:33:20 by ssuchane          #+#    #+#             */
/*   Updated: 2024/02/06 20:57:52 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb <= 9)
	{
		nb = nb + '0';
		write(1, &nb, 1);
	}
}

int	main(void)
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 5 == 0 && nb % 3 == 0)
		{
			write(1, "fizzbuzz\n", 9);
		}
		else if (nb % 3 == 0)
		{
			write(1, "fizz\n", 5);
		}
		else if (nb % 5 == 0)
		{
			write(1, "buzz\n", 5);
		}
		else
		{
			ft_putnbr(nb);
			write(1, "\n", 1);
		}
		nb++;
	}
	return (0);
}