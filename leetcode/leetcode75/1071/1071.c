/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1071.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:44:41 by ssuchane          #+#    #+#             */
/*   Updated: 2024/05/04 18:46:16 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_repeating(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i])
	{
		if (str1[i] == str2[j])
		{
			j++;
			if (str2[j] == '\0')
				j = 0;
		}
		else
			return (0);
		i++;
	}
	if (str2[j] != str2[0])
		return (2);
	return (1);
}

char	*gcdOfStrings(char *str1, char *str2)
{
	int		i;
	int		k;
	int		len1;
	int		len2;
	char	*result;

	i = 0;
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	if (len1 >= len2)
		k = len1;
	else
		k = len2;
	if (len1 >= len2)
	{
		if (!(is_repeating(str1, str2)) || is_repeating(str1, str2) == 2)
			return ("");
	}
	else
	{
		if (!(is_repeating(str1, str2)) || is_repeating(str1, str2) == 2)
			return ("");
	}
	while (k > 0)
	{
		if (len1 % k == 0 && len2 % k == 0)
			break ;
		k--;
	}
	result = (char *)malloc(sizeof(char) * (k + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < k)
	{
		if (len1 >= len2)
			result[i] = str1[i];
		else
			result[i] = str2[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
int	main(void)
{
	gcdOfStrings("AABBAABBAA", "AABB");
	return (0);
}
