/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:21:33 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/25 13:19:42 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	size;
	int	a;
	int	b;
	int	*arr;
	int	i;

	i = 0;
	a = 0;
	b = 0;
	if (start < 0)
		a = -start;
	if (end < 0)
		b = -end;
	size = a + b + 1;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (0);
	while (start <= end)
	{
		arr[i] = start;
		i++;
		start++;
	}
	while (start >= end)
	{
		arr[i] = start;
		i++;
		start--;
	}
	i = 0;
	while (arr[i])
	{
		printf("%d", arr[i]);
		i++;
	}
	return (arr);
}

int	main(void)
{
	ft_range(3, 6);
	return (0);
}


// Assignment name  : ft_range
// Expected files   : ft_range.c
// Allowed functions: malloc
// --------------------------------------------------------

// Write the following function:

// int     *ft_range(int start, int end);

// It must allocate (with malloc()) an array of integers, fill
// it with consecutive
// values that begin at start and end at end (Including start
// and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 1, 2 and 3.
// - With (-1, 2) you will return an array containing -1, 0, 1 and 2.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing 0, -1, -2 and -3.