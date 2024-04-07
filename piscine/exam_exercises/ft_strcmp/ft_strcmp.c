/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:09:55 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/07 18:29:13 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	while ((s1[i] == '\0' || s2[i] == '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
	return (0);
}

int	main(void)
{
	printf("Test 1\n");
	printf("%d\n", ft_strcmp("abcd", "abcd"));
	printf("%d\n", strcmp("abcd", "abcd"));
	printf("Test 2\n");
	printf("%d\n", ft_strcmp("", "abcd"));
	printf("%d\n", strcmp("", "abcd"));
	printf("Test 3\n");
	printf("%d\n", ft_strcmp("abcd", ""));
	printf("%d\n", strcmp("abcd", ""));
	printf("Test 4\n");
	printf("%d\n", ft_strcmp("asdfg", "asf"));
	printf("%d\n", strcmp("asdfg", "asf"));
	printf("Test 5\n");
	printf("%d\n", ft_strcmp("b", "a"));
	printf("%d\n", strcmp("b", "a"));
	printf("Test 6\n");
	printf("%d\n", ft_strcmp("aaaaa", "ab"));
	printf("%d\n", strcmp("aaaaa", "ab"));
	return (0);
}
