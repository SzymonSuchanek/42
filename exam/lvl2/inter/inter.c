/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:10:45 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/08 19:10:47 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int	arr[256] = {0};
	char	*dest;
	int	i = 0;
	int	j = 0;

	dest = s1;
	while (s1[i] && s2[i])
	{
		if (!arr[(int)s1[i]])
		{
			arr[(int)s1[i]] = 1;
			dest[j++] = s1[i];
		}
		i++;
	}
	dest[j] = '\0';
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (dest[i] == s2[j])
			{
				write(1, &dest[i], 1);
				break ;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
		write(1, "\n", 1);
	else if (argv[1] && argv[2])
		inter(argv[1], argv[2]);
	return (0);
}
