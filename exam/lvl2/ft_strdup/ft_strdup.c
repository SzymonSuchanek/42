/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:36:35 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/07 20:20:40 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	while (src[i] != '\0')
		i++;
	ptr = (char *)malloc(sizeof(char) * i + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	main(void)
{
	printf("Test 1\n");
	printf("%s\n", strdup("Testing"));
	printf("%s\n", ft_strdup("Testing"));
	printf("Test 2\n");
	printf("%s\n", strdup(""));
	printf("%s\n", ft_strdup(""));
	return (0);
}
