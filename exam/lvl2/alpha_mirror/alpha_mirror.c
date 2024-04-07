/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 20:08:46 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/05 22:14:42 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char *str)
{
	int		i;
	char	chr;
	char	chrup;
	int		b;
	int		c;

	i = 0;
	c = 25;
	b = 25;
	chrup = 'A';
	chr = 'a';
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && str[i] == chr)
		{
			str[i] = chr + b;
			write(1, &str[i], 1);
			chr = 'a' - 1;
			b = 27;
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && str[i] == chrup)
		{
			str[i] = chrup + c;
			write(1, &str[i], 1);
			chrup = 'A' - 1;
			c = 27;
			i++;
		}
		else if (!(str[i] >= 'a' && str[i] <= 'z' && str[i])
			&& !(str[i] >= 'A' && str[i] <= 'Z'))
		{
			write(1, &str[i], 1);
			i++;
		}
		chrup++;
		chr++;
		c -= 2;
		b -= 2;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else if (argv[1])
		alpha_mirror(argv[1]);
	return (0);
}
