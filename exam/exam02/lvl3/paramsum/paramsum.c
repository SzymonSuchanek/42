/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:24:32 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/25 20:18:25 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	a;

	i = 0;
	if (argc < 2)
		write(1, "\n", 1);
	else if (argv[i])
	{
		while (argv[i])
			i++;
		i = i - 1;
		a = i + '0';
		write(1, &a, 1);
	}
	return (0);
}

// Assignment name  : paramsum
// Expected files   : paramsum.c
// Allowed functions: write
// ----------------------------------------------------

// Write a program that displays the number of arguments
// passed to it, followed by
// a newline.

// If there are no arguments, just display a 0 followed by
// a newline.

// Example:

// $>./paramsum 1 2 3 5 7 24
// 6
// $>./paramsum 6 12 24 | cat -e
// 3$
// $>./paramsum | cat -e
// 0$
// $>