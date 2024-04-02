/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:28:17 by ssuchane          #+#    #+#             */
/*   Updated: 2024/02/08 13:16:46 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);

void	ft_sort_str_tab(char *argv[], int size)
{
	int		a;
	int		b;
	char	*tmp;

	a = 0;
	b = 0;
	while (b < size - 1)
	{
		while (a < size - 1 - b)
		{
			if (ft_strcmp(argv[a], argv[a + 1]) > 0)
			{
				tmp = argv[a];
				argv[a] = argv[a + 1];
				argv[a + 1] = tmp;
			}
			a++;
		}
		b++;
		a = 1;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	else if (s1[i] != '\0' && s2[i] == '\0')
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	ft_sort_str_tab(argv, argc);
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
	return (0);
}
