/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wd_match.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:42:49 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/09 13:26:12 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	wdmatch(char *s1, char *s2)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (s1[i])
	{
		i++;
		len++;
	}
	i = 0;
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (i == len)
	{
		write (1, s1, len);
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
		write(1, "\n", 1);
	else
		wdmatch(argv[1], argv[2]);
	return (0);
}
