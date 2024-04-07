/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 21:48:44 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/07 22:19:15 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!(s[i]) || !(accept[i]))
		return (0);
	while (s[i] != '\0' && accept[j] != '\0')
	{
		if (s[i] == accept[j])
		{
			i++;
			j = -1;
		}
		j++;
	}
	return (i);
}

int	main(void)
{
	printf("Test 1\n");
	printf("%lu\n", strspn("Testing", "Testing"));
	printf("%zu\n\n", ft_strspn("Testing", "Testing"));
	printf("Test 2\n");
	printf("%lu\n", strspn("", "Testing"));
	printf("%zu\n\n", ft_strspn("", "Testing"));
	printf("Test 3\n");
	printf("%lu\n", strspn("Testing", ""));
	printf("%zu\n\n", ft_strspn("Testing", ""));
	printf("Test 4\n");
	printf("%lu\n", strspn("Testing", "ing"));
	printf("%zu\n\n", ft_strspn("Testing", "ing"));
	printf("Test 5\n");
	printf("%lu\n", strspn("Testing", "itn"));
	printf("%zu\n\n", ft_strspn("Testing", "itn"));
	return (0);
}
