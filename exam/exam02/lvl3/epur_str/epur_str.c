/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:17:48 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/24 14:58:40 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checker(char *str)
{
	int	i;

	i = 0;
	if (str[i])
	{
		while (str[i] == '\t' || str[i] == ' ')
		{
			i++;
			if (str[i] + 1 != ' ' && str[i] + 1 != '\t')
				return (1);
		}
	}
	return (0);
}


void	epur_str(char *str)
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
			write(1, " ", 1);
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
		epur_str(argv[1]);
	return (0);
}

// Assignment name  : epur_str
// Expected files   : epur_str.c
// Allowed functions: write
// ------------------------------------------
// Write a program that takes a string, and
// displays this string with exactly one
// space between words, with no spaces or tabs
// either at the beginning or the end,
// followed by a \n.

// A "word" is defined as a part of a string
// delimited either by spaces/tabs, or
// by the start/end of the string.

// If the number of arguments is not 1, or if
// there are no words to display, the
// program displays \n.

// Example:

// $> ./epur_str "See? It's easy to print the same thing" | cat -e
// See? It's easy to print the same thing$
// $> ./epur_str "   time it    wil    be   more complex  . " | cat -e
// this time it will be more complex .$
// $> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
// $
// $> ./epur_str "" | cat -e
// $
// $>