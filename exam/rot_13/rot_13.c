/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:30:11 by ssuchane          #+#    #+#             */
/*   Updated: 2024/02/07 16:55:48 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'M')
			|| (str[i] >= 'a' && str[i] <= 'm'))
			str[i] += 13;
		else if ((str[i] >= 'N' && str[i] <= 'Z')
			|| (str[i] >= 'n' && str[i] <= 'z'))
			str[i] -= 13;
		else
			str[i] = str[i];
		write(1, &str[i], 1);
		i++;
	}
}

/* void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
 */
int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	else if (argv[1][i] != '\0')
	{
		rot_13(argv[1]);
		/* print_str(argv[1]); */
		i++;
	}
	return (0);
}




/* Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$> */