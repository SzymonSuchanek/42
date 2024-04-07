/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:41:21 by ssuchane          #+#    #+#             */
/*   Updated: 2024/02/07 23:53:58 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i--;
	}
}


int	main(int argc, char *argv[])
{
    if (argc != 2)
		write(1, "\n", 1);
	else
		rev_print(argv[1]);
	return (0);
}




/* Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$ */