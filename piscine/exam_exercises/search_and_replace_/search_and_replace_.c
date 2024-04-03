/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace_.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:11:36 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/02 21:25:28 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	search_and_replace(char *str, char a, char b)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			str[i] = b;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
		write(1, "\n", 1);
	else if (argv[1] && !argv[2][1] && !argv[2][1])
	{
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
		write(1, "\n", 1);
	}
	return (0);
}
