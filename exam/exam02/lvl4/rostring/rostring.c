/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:50:24 by ssuchane          #+#    #+#             */
/*   Updated: 2024/05/02 16:50:15 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	rostring(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s[i])
	{
		while (s[i] == ' ' || s[i] == '\t')
		{
			i++;
			j = i;
		}
		while (s[i] != ' ' && s[i] != '\t')
			i++;
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		if (s[i] == '\0')
		{
			while (s[j] != ' ' && s[j] != '\t')
			{
				write(1, &s[j], 1);
				j++;
			}
			return ;
		}
	}
	while (s[i])
	{
		while (s[i] == ' ' || s[i] == '\t')
		{
			i++;
			if (s[i] != ' ' && s[i] != '\t')
				write(1, " ", 1);
		}
		write(1, &s[i], 1);
		if (s[i + 1] == '\0')
		{
			write(1, " ", 1);
			while (s[j] != ' ' && s[j] != '\t')
			{
				write(1, &s[j], 1);
				j++;
			}
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		write(1, "\n", 1);
	else if (argv[1])
		rostring(argv[1]);
	return (0);
}

// Assignment name  : rostring
// Expected files   : rostring.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays this string after rotating it
// one word to the left.

// Thus, the first word becomes the last, and others stay in the same order.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// Words will be separated by only one space in the output.

// If there's less than one argument, the program displays \n.

// Example:

// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring "first" "2" "11000000"
// first
// $>
// $>./rostring | cat -e
// $
// $>