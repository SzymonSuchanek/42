/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:49:58 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/07 18:08:30 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	is_negative;
	int	result;

	i = 0;
	is_negative = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			is_negative = -1;
			write(1, "-", 1);
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		write(1, &str[i], 1);
		i++;
	}
	return (result * is_negative);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else if (argv[1])
	{
		ft_atoi(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}
