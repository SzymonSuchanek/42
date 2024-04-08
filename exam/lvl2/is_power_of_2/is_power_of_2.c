/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:12:31 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/08 19:24:05 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	else if (n / 2 == 1)
		return (1);
	else if (n % 2 == 1)
		return (0);
	else if (n % 2 == 0)
		return (1);
	else
		return (is_power_of_2(n / 2));
}

int	main(void)
{
	int	n;

	n = 0;
	printf("%d", is_power_of_2(n));
	return (0);
}
