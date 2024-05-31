// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   inter.c                                            :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/05/11 16:52:54 by ssuchane          #+#    #+#             */
// /*   Updated: 2024/05/11 17:17:12 by ssuchane         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include <unistd.h>

int	ft_strchr(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (str[i] && ( i < len || len == -1))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	else if (argv[1][i] && argv[2][i])
		while (!(ft_strchr(argv[1], argv[1][i], i)) && ft_strchr(argv[2], argv[2][i], -1))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	return (0);
}


