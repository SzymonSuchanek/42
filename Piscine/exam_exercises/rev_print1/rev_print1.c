/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:27:19 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/29 23:38:54 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	i = i - 1;
	while (str[i])
	{
		write(1, &str[i], 1);
		i--;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 1 || argc > 2)
		write(1, "\n", 1);
	else if (argv[1])
		rev_print(argv[1]);
	return (0);
}
