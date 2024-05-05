/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:54:02 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/09 17:19:01 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				big;

	i = 0;
	big = tab[i];
	if (len < 1)
		return (0);
	while (i < len)
	{
		if (tab[i] > big)
			big = tab[i];
		i++;
	}
	return (big);
}

int	main(void)
{
	int	len = 5;
	int	tab[5] = {-120, -15, -25, -4, -5};

	printf("%d", max(tab, len));
	return (0);
}
