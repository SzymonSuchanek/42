/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:22:38 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/25 17:15:35 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	i;
	int	*arr;
	int	size;

	i = 0;
	size = (end - start);
	if (size < 0)
		size = -size;
	size = size + 1;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	while (start < end)
	{
		arr[i] = end;
		end--;
		i++;
	}
	while (start >= end)
	{
		arr[i] = start;
		start--;
		i++;
	}
	arr[i] = 0;
	i = 0;
	while ((arr[i] || arr[i] == 0) && i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (arr);
}

int	main(void)
{
	ft_rrange(-4, 4);
	printf("\n");
	ft_rrange(4, -4);
	return (0);
}


// Assignment name  : ft_rrange
// Expected files   : ft_rrange.c
// Allowed functions: malloc
// ------------------------------------------------
// Write the following function:

// int     *ft_rrange(int start, int end);

// It must allocate (with malloc()) an array of integers,
// fill it with consecutive
// values that begin at end and end at start (Including
// start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 3, 2 and 1
// - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing -3, -2, -1 and 0.