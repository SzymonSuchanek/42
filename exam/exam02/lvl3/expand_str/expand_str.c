/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:18:59 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/24 15:10:35 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	expand_str(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	j = j - 1;
	while (str[j] == ' ' || str[j] == '\t')
		j--;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] && i <= j)
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			write(1, "   ", 3);
		}
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else if (argv[1])
		expand_str(argv[1]);
	return (0);
}


// Assignment name  : expand_str
// Expected files   : expand_str.c
// Allowed functions: write
// -----------------------------------------------

// Write a program that takes a string and displays
// it with exactly three spaces
// between each word, with no spaces or tabs either
// at the beginning or the end,
// followed by a newline.

// A word is a section of string delimited either by
// spaces/tabs, or by the
// start/end of the string.

// If the number of parameters is not 1, or if there
// are no words, simply display
// a newline.

// Examples:

// $> ./expand_str "See? It's easy to print the same thing" | cat -e
// See?   It's   easy   to   print   the   same   thing$
// $> ./expand_str " this    time it    will   be   more complex  " | cat -e
// this   time   it   will   be   more   complex$
// $> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
// $
// $> ./expand_str "" | cat -e
// $
// $>