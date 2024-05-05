/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   605.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 18:13:35 by ssuchane          #+#    #+#             */
/*   Updated: 2024/05/05 18:16:13 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

bool	canPlaceFlowers(int *flowerbed, int flowerbedSize, int n)
{
	int	i;
	int	j;
	int	consecutive_zeros;

	i = 0;
	j = 0;
	while (i < flowerbedSize)
	{
		consecutive_zeros = 0;
		i = j;
		while (flowerbed[j] == 0)
		{
			j++;
			consecutive_zeros++;
			if (flowerbed[i + 1] == 1)
			{
				if (consecutive_zeros < 3)
				{
					i = j + 1;
					break ;
				}
				else if (consecutive_zeros > 2 && consecutive_zeros < 4)
					n -= 1;
				else if (consecutive_zeros > 3 && consecutive_zeros < 5)
					n -= 2;
				else if (consecutive_zeros > 4 && consecutive_zeros < 6)
					n -= 3;
			}
		}
		i = j + 1;
	}
	if (n > 0)
	{
		return (false);
	}
	return (true);
}

int	main(void)
{
	int arr[] = {1, 0, 0, 0, 1};
	
	printf("%d", canPlaceFlowers(arr, 5, 1));
	return (0);
}