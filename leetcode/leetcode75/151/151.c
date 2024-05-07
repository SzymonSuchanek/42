/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   151.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 19:44:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/05/07 20:00:42 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*reverseWords(char *s)
{
	int		i;
	int		j;
	int		save;
	int		len;
	char	*result;

	len = strlen(s);
	i = len - 1;
	j = 0;
	result = (char *)malloc(sizeof(char) * len + 2);
	if (!result)
		return (NULL);
	while (s[j])
	{
		while (s[j] == ' ')
			j--;
		while (s[j] && s[j] != ' ')
		{
			j--;
			save = j + 1;
		}
		while (s[save] != ' ')
		{
			result[i++] = s[save++];
			if (s[save + 1] == ' ')
				result[i++] = ' ';
		}
	}
	result[i] = '\0';
	return (result);
}

int	main(void)
{
	char	str[] = " Testig one two three ";

	printf("%s", reverseWords(str));
	return (0);
}
