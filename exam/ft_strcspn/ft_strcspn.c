/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:30:19 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/07 19:34:49 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
			{
				return (i);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (i);
}

int	main()
{
	printf("Test 1\n");
	printf("%lu\n", strcspn("Testing", "ing"));
	printf("%zu\n", ft_strcspn("Testing", "ing"));
	printf("Test 2\n");
	printf("%lu\n", strcspn("Testing", ""));
	printf("%zu\n", ft_strcspn("Testing", ""));
	printf("Test 3\n");
	printf("%lu\n", strcspn("", "ing"));
	printf("%zu\n", ft_strcspn("", "ing"));
	printf("Test 4\n");
	printf("%lu\n", strcspn("Testing", "Testing"));
	printf("%zu\n", ft_strcspn("Testing", "Testing"));
	printf("Test 5\n");
	printf("%lu\n", strcspn("Testing", "ingh"));
	printf("%zu\n", ft_strcspn("Testing", "ingh"));
	printf("Test 6\n");
	printf("%lu\n", strcspn("Testing", "it"));
	printf("%zu\n", ft_strcspn("Testing", "it"));
}
