/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1431.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:46:41 by ssuchane          #+#    #+#             */
/*   Updated: 2024/05/04 20:05:42 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

int	find_max_candies(int *candies, int candiesSize)
{
	int	i;
	int	max_candies;

	i = 0;
	max_candies = 0;
	while (i < candiesSize)
	{
		if (max_candies < candies[i])
			max_candies = candies[i];
		i++;
	}
	return (max_candies);
}

bool	*kidsWithCandies(int *candies, int candiesSize, int extraCandies,
		int *returnSize)
{
	int		i;
	int		j;
	bool	*array;
	int		max_candies;

	i = 0;
	j = 0;
	max_candies = find_max_candies(candies, candiesSize);
	array = (bool *)malloc(sizeof(bool) * candiesSize);
	if (!array)
	{
		*returnSize = 0;
		return (NULL);
	}
	while (i < candiesSize)
	{
		if (candies[i] + extraCandies >= max_candies)
			array[j] = true;
		else
			array[j] = false;
		j++;
		i++;
	}
	*returnSize = candiesSize;
	return (array);
}
