/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:29:58 by ssuchane          #+#    #+#             */
/*   Updated: 2024/02/07 22:55:36 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while ((str[i] == ' ' || str[i] == '\t'))
		i--;
	while ((str[i] >= 33 && str[i] <= 126))
	{
		i--;
	}
	i = i + 1;
	while ((str[i] >= 33 && str[i] <= 126))
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}

	/* int main ()
	{
		char argv[] = "  lorem,ipsum  ";
		first_word(argv);
		return (0);
	} */

	/* Assignment name  : first_word
	Expected files   : first_word.c
	Allowed functions: write
	--------------------------------------------------------------------------------

	Write a program that takes a string and displays its first word,
		followed by a
	newline.

	A word is a section of string delimited by spaces/tabs or by the start/end of
	the string.

	If the number of parameters is not 1, or if there are no words,
		simply display
	a newline.

	Examples:

	$> ./first_word "FOR PONY" | cat -e
	FOR$
	$> ./first_word "this        ...       is sparta, then again,
		maybe    not" | cat -e
	this$
	$> ./first_word "   " | cat -e
	$
	$> ./first_word "a" "b" | cat -e
	$
	$> ./first_word "  lorem,ipsum  " | cat -e
	lorem,ipsum$
	$> */