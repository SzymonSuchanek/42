/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 20:43:34 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/29 21:35:03 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	repeat_alpha(char *str)
{
	int	indexlower;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		indexlower = str[i];
		if (indexlower >= 97 && indexlower <= 122)
			indexlower = indexlower - 96;
		else if (indexlower >= 65 && indexlower <= 90)
			indexlower = indexlower - 64;
		else
			indexlower = 1;
		while (indexlower > 0)
		{
			write(1, &str[i], 1);
			indexlower--;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 1 || argc > 2)
		write(1, "\n", 1);
	else if (argv[1])
		repeat_alpha(argv[1]);
	return (0);
}

