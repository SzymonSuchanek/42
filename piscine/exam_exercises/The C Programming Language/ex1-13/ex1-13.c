/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex1-13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 18:31:38 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/01 19:00:07 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	histogram(char *str)
{
	int	i;
	int	in_word;
	int	len;

	i = 0;
	in_word = 0;
	len = 0;
	while (str[i] != '\0')
	{
		while (str[i] != ' ' || str[i] != '\t')
		{
			in_word = 1;
			len++;
			i++;
		}
		i++;
	}
}

int	main(void)
{
	char	

	histogram(str);
	return (0);
}
