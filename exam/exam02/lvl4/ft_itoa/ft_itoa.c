/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:46:36 by ssuchane          #+#    #+#             */
/*   Updated: 2024/05/03 22:07:09 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*result;
	int		digit_count;
	int		temp;

	temp = n;
	digit_count = 0;
	if (n == -2147483648)
		return ("-2147483648\0");
	if (n >= 0)
		digit_count++;
	while (temp)
	{
		temp = temp / 10;
		digit_count++;
	}
	result = (char *)malloc(sizeof(char) * digit_count + 1);
	if (!result)
		return (NULL);
	result[digit_count] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	while (n)
	{
		result[--digit_count] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}

int	main(void)
{
	printf("%s", ft_itoa(645));
	return (0);
}


// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);