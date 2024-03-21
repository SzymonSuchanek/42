/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:11:21 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/21 16:26:42 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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

int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_putnbr(char *str, int n, int digitcount)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[digitcount - 1 - i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		digitcount;
	char	*str;

	digitcount = ft_count(n);
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(sizeof(char) * (digitcount + 1));
	if (!str)
		return (NULL);
	str[digitcount] = '\0';
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (ft_putnbr(str, n, digitcount));
}
