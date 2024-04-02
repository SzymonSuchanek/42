/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex1-9.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:33:42 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/01 16:40:31 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	replace(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			write(1, " ", 1);
			i++;
			while (str[i] == ' ')
				i++;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	replace("Testujemy        to        dzisiaj        ");
	return (0);
}
