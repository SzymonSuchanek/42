/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:58:30 by ssuchane          #+#    #+#             */
/*   Updated: 2024/02/06 22:54:48 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_a(char *str)
{
    int	i;

	i = 0;
	if (str[i] == '\0')
		ft_putchar('a');
	while (str[i])
	{
		if (str[i] == 'a')
		{
			ft_putchar(str[i]);
			ft_putchar('\n');	
			break ;
		}
		i++;
	}
	if (str[i] != 'a')
		write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc ==2)
		aff_a(argv[1]);
	else if (argc == 1)
		write (1, "a", 1);
	else
		ft_putchar('\n');
	return (0);
} */

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc < 2)
	{
		write(1, "a", 1);
	}
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
				write(1, "a", 1);
			i++;	
		}
	}
	write(1, "\n", 1);
	return (0);
}







// Write a program that takes a string, and displays the first 'a' character it
// encounters in it, followed by a newline. If there are no 'a' characters in the
// string, the program just writes a newline. If the number of parameters is not
// 1, the program displays 'a' followed by a newline.
