/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:40:07 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/28 21:29:35 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != '\0' && (str[i] != ' ' || str[i] != '\t'))
	{
		while ((str[i] >= 33 && str[i] <= 127)
			&& (str[i] != ' ' && str[i] != '\t'))
		{
			write(1, &str[i], 1);
			i++;
		}
		break ;
	}
	write(1, "\n", 1);
	return (*str);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 1 || argc > 2)
		write(1, "\n", 1);
	else if (argv[1] != NULL)
		first_word(argv[1]);
	return (0);
}
