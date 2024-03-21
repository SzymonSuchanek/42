/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_adress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:23:20 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/21 17:54:28 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s)
{
	const char		*ptr;
	char			*ptr2;
	unsigned int	i;

	ptr = s;
	i = 0;
	ptr2 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ptr2)
		return (NULL);
	while (ptr[i] != '\0')
	{
		ptr2[i] = ptr[i];
		i++;
	}
	ptr2[i] = '\0';
	return (ptr2);
}

void	print_address(int *ptr)
{
	unsigned long long	hex;
	char				*hex_digits;
	int					i;
	int					j;
	int					rem;

	hex_digits = ft_strdup("0123456789ABCDEF");
	hex = (unsigned long long)ptr;
	i = 1;
	j = 16;
	while (i > 0)
	{
		rem = (hex % 16);
		hex = hex / 16;
		if (rem > 9)
			rem = rem - 10 + 'A';
		putchar(hex_digits[rem]);
		i--;
	}
}

int main() 
{
	char	*px;
	char	a;

	a = 'a';
	px = &a;
	printf("%p\n", px);
	return (0);
}
