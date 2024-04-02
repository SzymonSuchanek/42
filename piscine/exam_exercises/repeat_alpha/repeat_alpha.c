/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:30:24 by ssuchane          #+#    #+#             */
/*   Updated: 2024/02/07 20:14:15 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	repeat_alpha(char str)
{
	char	index;
	char	index2;

	index = 96;
	index2 = 64;

	if (str > 96 && str < 123)
	{
		while (str > index)
		{
			printf("%c", str);
			index++;
		}
	}
	else if (str > 64 && str < 91)
	{
		while (str > index2)
		{
			printf("%c", str);
			index2++;
		}
	}
	else if (!(str > 96 && str < 123) || !(str > 64 && str < 91))
		write(1, &str, 1);
	return ;

}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		repeat_alpha(argv[1][i]);
		i++;
	}
	return (0);
}

/* Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$> */