/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   151.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 19:44:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/05/07 20:22:26 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*reverseWords(char *s)
{
	int		i;
	int		j;
	int		k;
	int		len;
	char	*result;
	int		start;
	int		end;

	len = strlen(s);
	i = len - 1;
	j = 0;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (i >= 0)
	{
		while (i >= 0 && s[i] == ' ')
			i--;
		if (i < 0)
			break ;
		if (j != 0)
			result[j++] = ' ';
		end = i;
		while (i >= 0 && s[i] != ' ')
			i--;
		start = i + 1;
		k = start;
		while (k <= end)
		{
			result[j] = s[k];
			j++;
			k++;
		}
	}
	result[j] = '\0';
	return (result);
}

int	main(void)
{
	char	str[] = " Testig one two three ";

	printf("%s", reverseWords(str));
	return (0);
}
