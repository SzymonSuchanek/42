/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:23:13 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/25 19:41:15 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hidenp(char *s1, char *s2)
{
	int	i;
	int	j;
	int	len1;
	int	len2;

	len1 = 0;
	len2 = 0;
	i = 0;
	while (s1[i])
	{
		i++;
		len1++;
	}
	i = 0;
	while (s2[i])
	{
		i++;
		len2++;
	}
	i = 0;
	if (s1 == NULL)
		write(1, "1\n", 2);
	while (s1[i])
	{
		if (s1[i] == s2[j])
		{
			j++;
			if (j == len2)
				write(1, "1\n", 2);
		}
		i++;
	}
	if (i == len1 && j != len2)
		write(1, "0\n", 2);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
		write(1, "\n", 1);
	else if (argv[1] && argv[2])
		hidenp(argv[2], argv[1]);

	return (0);
}



// Assignment name  : hidenp
// Expected files   : hidenp.c
// Allowed functions: write
// -----------------------------------------------------------

// Write a program named hidenp that takes two strings and
// displays 1
// followed by a newline if the first string is hidden in the
// second one,
// otherwise displays 0 followed by a newline.

// Let s1 and s2 be strings. We say that s1 is hidden in s2 if
// it's possible to
// find each character from s1 in s2, in the same order as
// they appear in s1.
// Also, the empty string is hidden in any string.

// If the number of parameters is not 2, the program displays
// a newline.

// Examples :

// $>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
// 1$
// $>./hidenp "abc" "2altrb53c.sse" | cat -e
// 1$
// $>./hidenp "abc" "btarc" | cat -e
// 0$
// $>./hidenp | cat -e
// $
// $>