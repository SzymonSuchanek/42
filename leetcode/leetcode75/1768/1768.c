/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1768.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:13:49 by ssuchane          #+#    #+#             */
/*   Updated: 2024/05/04 15:40:15 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*mergeAlternately(char *word1, char *word2)
{
	int		i;
	int		j;
	int		k;
	int		len_word1;
	int		len_word2;
	char	*result;

	i = 0;
	j = 0;
	k = 0;
	len_word1 = ft_strlen(word1);
	len_word2 = ft_strlen(word2);
	result = (char *)malloc(sizeof(char) * (len_word1 + len_word2 + 1));
	if (!result)
		return (NULL);
	while (word1[j] || word2[k])
	{
		if (word1[j])
			result[i++] = word1[j++];
		if (word2[k])
			result[i++] = word2[k++];
	}
	result[i] = '\0';
	return (result);
}

int	main(void)
{
	char	str[] = "24";
	char	str2[] = "13579";

	printf("%s", mergeAlternately(str, str2));
	return (0);
}
