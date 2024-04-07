/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 20:21:45 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/07 22:04:15 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	j;

	j = 0;
	if (!s1 || !s2)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		while (*s1 && s2[j])
		{
			if (*s1 == s2[j])
			{
				return ((char *)s1);
			}
			j++;
		}
		j = 0;
		s1++;
	}
	return ((char *)s1);
}

int	main(void)
{
	printf("Test 1\n");
	printf("%s\n", strspn("Testing", "Testing"));
	printf("%s\n\n", ft_strpbrk("Testing", "Testing"));
	printf("Test 2\n");
	printf("%s\n", strspn("", "Testing"));
	printf("%s\n\n", ft_strpbrk("", "Testing"));
	printf("Test 3\n");
	printf("%s\n", strspn("Testing", ""));
	printf("%s\n\n", ft_strpbrk("Testing", ""));
	printf("Test 4\n");
	printf("%s\n", strspn("Testing", "ing"));
	printf("%s\n\n", ft_strpbrk("Testing", "ing"));
	printf("Test 5\n");
	printf("%s\n", strspn("Testing", "itn"));
	printf("%s\n\n", ft_strpbrk("Testing", "itn"));
	return (0);
}
